module.exports = grammar({
    name: 'gpr',

    extras: $ => [
        /\s/,
        $.comment
    ],

    rules: {

        //
        // Project Declarations
        //

        project: $ => seq(
            optional($._context_clause),
            $.project_declaration),

        _context_clause: $ => repeat1(
            $.with_declaration),

        with_declaration: $ => seq(
            optional(reservedWord("limited")),
            reservedWord("with"),
            seq($.string_literal, repeat(seq(",", $.string_literal))),
            ";"),

        project_declaration: $ => seq(
            optional($.project_qualifier),
            reservedWord("project"),
            field("name", $.name),
            optional($._project_extension),
            reservedWord("is"),
            repeat($._declarative_item),
            reservedWord("end"),
            field("endname", $.name),
            ";"),

        project_qualifier: $ => choice(
            reservedWord("standard"),
            reservedWord("abstract"),
            reservedWord("aggregate"),
            seq(reservedWord("aggregate"), reservedWord("library")),
            reservedWord("library"),
            reservedWord("configuration")),

        _project_extension: $ => seq(
            reservedWord("extends"),
            optional(reservedWord("all")),
            $.string_literal),

        //
        // Declarations
        //

        _declarative_item: $ => choice(
            $._simple_declarative_item,
            $.typed_string_declaration,
            $.package_declaration),

        _simple_declarative_item: $ => choice(
            $.variable_declaration,
            $.attribute_declaration,
            $.case_construction,
            $.empty_declaration),

        empty_declaration: $ => seq(
            reservedWord("null"),
            ";"),

        //
        // Packages
        //

        package_declaration: $ => seq(
            reservedWord("package"),
            field("name", $.identifier),
            choice(
                $._package_renaming,
                $._package_spec),
            ";"),

        _package_spec: $ => seq(
            optional($._package_extension),
            reservedWord("is"),
            repeat($._simple_declarative_item),
            reservedWord("end"),
            field("endname", $.identifier)),

        _package_renaming: $ => seq(
            reservedWord("renames"),
            field("origname", $.name)),

        _package_extension: $ => seq(
            reservedWord("extends"),
            field("basename", $.name)),

        //
        // Expressions
        //

        string_literal: $ => /\"(\"\"|[^\"\n])*\"/,

        string_literal_at: $ => seq(
            $.string_literal,
            reservedWord("at"),
            $.numeric_literal),

        attribute_reference: $ => seq(
            $.identifier,
            optional(seq(
                "(",
                choice(
                    $._others_designator,
                    $.string_literal),
                ")"))),

        variable_reference: $ => seq(
            $.name,
            optional(seq("'", $.attribute_reference))),

        project_reference: $ => seq(
            reservedWord("project"),
            "'",
            $.attribute_reference),

        term: $ => choice(
            $.expression_list,
            $.string_literal,
            $.string_literal_at,
            $.builtin_function_call,
            $.variable_reference,
            $.project_reference),

        expression: $ => seq(
            $.term,
            repeat(seq("&", $.term))),

        expression_list: $ => seq(
            "(",
            optional(seq($.expression, repeat(seq(",", $.expression)))),
            ")"),

        //
        // Built-in Functions
        //

        builtin_function_call: $ => seq(
            choice(
                field("name", reservedWord("external")),
                field("name", reservedWord("external_as_list")),
                field("name", $.identifier)),
            $.expression_list),

        //
        // Typed String Declaration
        //

        typed_string_declaration: $ => seq(
            reservedWord("type"),
            field("name", $.identifier),
            reservedWord("is"),
            "(",
            $.string_literal, repeat(seq(",", $.string_literal)),
            ")",
            ";"),

        //
        // Variables
        //

        variable_declaration: $ => seq(
            field("name", $.identifier),
            optional(seq(":", field("type", $.name))),
            ":=",
            $.expression,
            ";"),

        //
        // Case Constructions
        //

        case_construction: $ => seq(
            reservedWord("case"),
            $.variable_reference,
            reservedWord("is"),
            repeat($.case_item),
            reservedWord("end"),
            reservedWord("case"),
            ";"),

        case_item: $ => seq(
            reservedWord("when"),
            $.discrete_choice_list,
            "=>",
            repeat($._simple_declarative_item)),

        discrete_choice_list: $ => choice(
            seq($.string_literal, repeat(seq("|", $.string_literal))),
            $._others_designator),

        _others_designator: $ => reservedWord("others"),

        //
        // Attributes
        //

        attribute_declaration: $ => seq(
            reservedWord("for"),
            field("name", $.identifier),
            optional(seq("(", $.associative_array_index, ")")),
            reservedWord("use"),
            field("value", $.expression),
            ";"),

        associative_array_index: $ => choice(
            $._others_designator,
            $.string_literal,
            $.string_literal_at),

        //
        // Implicit rules
        //

        name: $ => seq(
            $.identifier,
            repeat(seq(".", $.identifier))),

        identifier: $ => /[_a-zA-Z][_a-zA-Z0-9]*/,

        numeric_literal: $ => /[0-9](_?[0-9])*/,

        comment: $ => /--.*/
    }
});

//
// Case-insensitive reserved words, from:
//    https://github.com/tree-sitter/tree-sitter/issues/261#issuecomment-810668664
//

function reservedWord(word) {
    return alias(new RegExp(caseInsensitive(word)), word)
}

function caseInsensitive(word) {
    return word.split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
}
