#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 241
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 20

enum {
  aux_sym_with_declaration_token1 = 1,
  aux_sym_with_declaration_token2 = 2,
  anon_sym_COMMA = 3,
  anon_sym_SEMI = 4,
  aux_sym_project_declaration_token1 = 5,
  aux_sym_project_declaration_token2 = 6,
  aux_sym_project_declaration_token3 = 7,
  aux_sym_project_qualifier_token1 = 8,
  aux_sym_project_qualifier_token2 = 9,
  aux_sym_project_qualifier_token3 = 10,
  aux_sym_project_qualifier_token4 = 11,
  aux_sym_project_qualifier_token5 = 12,
  aux_sym__project_extension_token1 = 13,
  aux_sym__project_extension_token2 = 14,
  aux_sym_empty_declaration_token1 = 15,
  aux_sym_package_declaration_token1 = 16,
  aux_sym__package_renaming_token1 = 17,
  sym_string_literal = 18,
  aux_sym_string_literal_at_token1 = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_AMP = 23,
  aux_sym_builtin_function_call_token1 = 24,
  aux_sym_builtin_function_call_token2 = 25,
  aux_sym_typed_string_declaration_token1 = 26,
  anon_sym_COLON = 27,
  anon_sym_COLON_EQ = 28,
  aux_sym_case_construction_token1 = 29,
  aux_sym_case_item_token1 = 30,
  anon_sym_EQ_GT = 31,
  anon_sym_PIPE = 32,
  aux_sym__others_designator_token1 = 33,
  aux_sym_attribute_declaration_token1 = 34,
  aux_sym_attribute_declaration_token2 = 35,
  anon_sym_DOT = 36,
  sym_identifier = 37,
  sym_numeric_literal = 38,
  sym_comment = 39,
  sym_project = 40,
  aux_sym__context_clause = 41,
  sym_with_declaration = 42,
  sym_project_declaration = 43,
  sym_project_qualifier = 44,
  sym__project_extension = 45,
  sym__declarative_item = 46,
  sym__simple_declarative_item = 47,
  sym_empty_declaration = 48,
  sym_package_declaration = 49,
  sym__package_spec = 50,
  sym__package_renaming = 51,
  sym__package_extension = 52,
  sym_string_literal_at = 53,
  sym_attribute_reference = 54,
  sym_variable_reference = 55,
  sym_project_reference = 56,
  sym_term = 57,
  sym_expression = 58,
  sym_expression_list = 59,
  sym_builtin_function_call = 60,
  sym_typed_string_declaration = 61,
  sym_variable_declaration = 62,
  sym_case_construction = 63,
  sym_case_item = 64,
  sym_discrete_choice_list = 65,
  sym__others_designator = 66,
  sym_attribute_declaration = 67,
  sym_associative_array_index = 68,
  sym_name = 69,
  aux_sym_with_declaration_repeat1 = 70,
  aux_sym_project_declaration_repeat1 = 71,
  aux_sym__package_spec_repeat1 = 72,
  aux_sym_expression_repeat1 = 73,
  aux_sym_expression_list_repeat1 = 74,
  aux_sym_case_construction_repeat1 = 75,
  aux_sym_discrete_choice_list_repeat1 = 76,
  aux_sym_name_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_with_declaration_token1] = "limited",
  [aux_sym_with_declaration_token2] = "with",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [aux_sym_project_declaration_token1] = "project",
  [aux_sym_project_declaration_token2] = "is",
  [aux_sym_project_declaration_token3] = "end",
  [aux_sym_project_qualifier_token1] = "standard",
  [aux_sym_project_qualifier_token2] = "abstract",
  [aux_sym_project_qualifier_token3] = "aggregate",
  [aux_sym_project_qualifier_token4] = "library",
  [aux_sym_project_qualifier_token5] = "configuration",
  [aux_sym__project_extension_token1] = "extends",
  [aux_sym__project_extension_token2] = "all",
  [aux_sym_empty_declaration_token1] = "null",
  [aux_sym_package_declaration_token1] = "package",
  [aux_sym__package_renaming_token1] = "renames",
  [sym_string_literal] = "string_literal",
  [aux_sym_string_literal_at_token1] = "at",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_AMP] = "&",
  [aux_sym_builtin_function_call_token1] = "external",
  [aux_sym_builtin_function_call_token2] = "external_as_list",
  [aux_sym_typed_string_declaration_token1] = "type",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_case_construction_token1] = "case",
  [aux_sym_case_item_token1] = "when",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PIPE] = "|",
  [aux_sym__others_designator_token1] = "others",
  [aux_sym_attribute_declaration_token1] = "for",
  [aux_sym_attribute_declaration_token2] = "use",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_numeric_literal] = "numeric_literal",
  [sym_comment] = "comment",
  [sym_project] = "project",
  [aux_sym__context_clause] = "_context_clause",
  [sym_with_declaration] = "with_declaration",
  [sym_project_declaration] = "project_declaration",
  [sym_project_qualifier] = "project_qualifier",
  [sym__project_extension] = "_project_extension",
  [sym__declarative_item] = "_declarative_item",
  [sym__simple_declarative_item] = "_simple_declarative_item",
  [sym_empty_declaration] = "empty_declaration",
  [sym_package_declaration] = "package_declaration",
  [sym__package_spec] = "_package_spec",
  [sym__package_renaming] = "_package_renaming",
  [sym__package_extension] = "_package_extension",
  [sym_string_literal_at] = "string_literal_at",
  [sym_attribute_reference] = "attribute_reference",
  [sym_variable_reference] = "variable_reference",
  [sym_project_reference] = "project_reference",
  [sym_term] = "term",
  [sym_expression] = "expression",
  [sym_expression_list] = "expression_list",
  [sym_builtin_function_call] = "builtin_function_call",
  [sym_typed_string_declaration] = "typed_string_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_case_construction] = "case_construction",
  [sym_case_item] = "case_item",
  [sym_discrete_choice_list] = "discrete_choice_list",
  [sym__others_designator] = "_others_designator",
  [sym_attribute_declaration] = "attribute_declaration",
  [sym_associative_array_index] = "associative_array_index",
  [sym_name] = "name",
  [aux_sym_with_declaration_repeat1] = "with_declaration_repeat1",
  [aux_sym_project_declaration_repeat1] = "project_declaration_repeat1",
  [aux_sym__package_spec_repeat1] = "_package_spec_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_case_construction_repeat1] = "case_construction_repeat1",
  [aux_sym_discrete_choice_list_repeat1] = "discrete_choice_list_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_with_declaration_token1] = aux_sym_with_declaration_token1,
  [aux_sym_with_declaration_token2] = aux_sym_with_declaration_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_project_declaration_token1] = aux_sym_project_declaration_token1,
  [aux_sym_project_declaration_token2] = aux_sym_project_declaration_token2,
  [aux_sym_project_declaration_token3] = aux_sym_project_declaration_token3,
  [aux_sym_project_qualifier_token1] = aux_sym_project_qualifier_token1,
  [aux_sym_project_qualifier_token2] = aux_sym_project_qualifier_token2,
  [aux_sym_project_qualifier_token3] = aux_sym_project_qualifier_token3,
  [aux_sym_project_qualifier_token4] = aux_sym_project_qualifier_token4,
  [aux_sym_project_qualifier_token5] = aux_sym_project_qualifier_token5,
  [aux_sym__project_extension_token1] = aux_sym__project_extension_token1,
  [aux_sym__project_extension_token2] = aux_sym__project_extension_token2,
  [aux_sym_empty_declaration_token1] = aux_sym_empty_declaration_token1,
  [aux_sym_package_declaration_token1] = aux_sym_package_declaration_token1,
  [aux_sym__package_renaming_token1] = aux_sym__package_renaming_token1,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_string_literal_at_token1] = aux_sym_string_literal_at_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_AMP] = anon_sym_AMP,
  [aux_sym_builtin_function_call_token1] = aux_sym_builtin_function_call_token1,
  [aux_sym_builtin_function_call_token2] = aux_sym_builtin_function_call_token2,
  [aux_sym_typed_string_declaration_token1] = aux_sym_typed_string_declaration_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [aux_sym_case_construction_token1] = aux_sym_case_construction_token1,
  [aux_sym_case_item_token1] = aux_sym_case_item_token1,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__others_designator_token1] = aux_sym__others_designator_token1,
  [aux_sym_attribute_declaration_token1] = aux_sym_attribute_declaration_token1,
  [aux_sym_attribute_declaration_token2] = aux_sym_attribute_declaration_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_comment] = sym_comment,
  [sym_project] = sym_project,
  [aux_sym__context_clause] = aux_sym__context_clause,
  [sym_with_declaration] = sym_with_declaration,
  [sym_project_declaration] = sym_project_declaration,
  [sym_project_qualifier] = sym_project_qualifier,
  [sym__project_extension] = sym__project_extension,
  [sym__declarative_item] = sym__declarative_item,
  [sym__simple_declarative_item] = sym__simple_declarative_item,
  [sym_empty_declaration] = sym_empty_declaration,
  [sym_package_declaration] = sym_package_declaration,
  [sym__package_spec] = sym__package_spec,
  [sym__package_renaming] = sym__package_renaming,
  [sym__package_extension] = sym__package_extension,
  [sym_string_literal_at] = sym_string_literal_at,
  [sym_attribute_reference] = sym_attribute_reference,
  [sym_variable_reference] = sym_variable_reference,
  [sym_project_reference] = sym_project_reference,
  [sym_term] = sym_term,
  [sym_expression] = sym_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_builtin_function_call] = sym_builtin_function_call,
  [sym_typed_string_declaration] = sym_typed_string_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_case_construction] = sym_case_construction,
  [sym_case_item] = sym_case_item,
  [sym_discrete_choice_list] = sym_discrete_choice_list,
  [sym__others_designator] = sym__others_designator,
  [sym_attribute_declaration] = sym_attribute_declaration,
  [sym_associative_array_index] = sym_associative_array_index,
  [sym_name] = sym_name,
  [aux_sym_with_declaration_repeat1] = aux_sym_with_declaration_repeat1,
  [aux_sym_project_declaration_repeat1] = aux_sym_project_declaration_repeat1,
  [aux_sym__package_spec_repeat1] = aux_sym__package_spec_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_case_construction_repeat1] = aux_sym_case_construction_repeat1,
  [aux_sym_discrete_choice_list_repeat1] = aux_sym_discrete_choice_list_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_with_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_declaration_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_declaration_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_declaration_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_qualifier_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_qualifier_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_qualifier_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_qualifier_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_qualifier_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__project_extension_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__project_extension_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_empty_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_package_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__package_renaming_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_at_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_builtin_function_call_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_builtin_function_call_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_typed_string_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_case_construction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_case_item_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__others_designator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_declaration_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__context_clause] = {
    .visible = false,
    .named = false,
  },
  [sym_with_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_project_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_project_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym__project_extension] = {
    .visible = false,
    .named = true,
  },
  [sym__declarative_item] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_declarative_item] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__package_spec] = {
    .visible = false,
    .named = true,
  },
  [sym__package_renaming] = {
    .visible = false,
    .named = true,
  },
  [sym__package_extension] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal_at] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_project_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_string_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_case_construction] = {
    .visible = true,
    .named = true,
  },
  [sym_case_item] = {
    .visible = true,
    .named = true,
  },
  [sym_discrete_choice_list] = {
    .visible = true,
    .named = true,
  },
  [sym__others_designator] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_associative_array_index] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_with_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_project_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__package_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_construction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_discrete_choice_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_basename = 1,
  field_endname = 2,
  field_name = 3,
  field_origname = 4,
  field_type = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_basename] = "basename",
  [field_endname] = "endname",
  [field_name] = "name",
  [field_origname] = "origname",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 1},
  [19] = {.index = 31, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_endname, 4},
    {field_name, 1},
  [2] =
    {field_basename, 1},
  [3] =
    {field_origname, 1},
  [4] =
    {field_basename, 2, .inherited = true},
    {field_endname, 2, .inherited = true},
    {field_name, 1},
  [7] =
    {field_name, 1},
    {field_origname, 2, .inherited = true},
  [9] =
    {field_name, 0},
  [10] =
    {field_endname, 5},
    {field_name, 1},
  [12] =
    {field_endname, 5},
    {field_name, 2},
  [14] =
    {field_endname, 2},
  [15] =
    {field_name, 1},
    {field_value, 3},
  [17] =
    {field_endname, 6},
    {field_name, 1},
  [19] =
    {field_endname, 6},
    {field_name, 2},
  [21] =
    {field_endname, 3},
  [22] =
    {field_basename, 0, .inherited = true},
    {field_endname, 3},
  [24] =
    {field_name, 0},
    {field_type, 2},
  [26] =
    {field_endname, 7},
    {field_name, 2},
  [28] =
    {field_basename, 0, .inherited = true},
    {field_endname, 4},
  [30] =
    {field_name, 1},
  [31] =
    {field_name, 1},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 13,
  [20] = 12,
  [21] = 15,
  [22] = 13,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 43,
  [58] = 51,
  [59] = 49,
  [60] = 44,
  [61] = 46,
  [62] = 47,
  [63] = 63,
  [64] = 50,
  [65] = 46,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 51,
  [71] = 49,
  [72] = 72,
  [73] = 44,
  [74] = 47,
  [75] = 50,
  [76] = 43,
  [77] = 77,
  [78] = 78,
  [79] = 67,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 83,
  [87] = 87,
  [88] = 81,
  [89] = 83,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 81,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 99,
  [106] = 106,
  [107] = 99,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 119,
  [128] = 128,
  [129] = 129,
  [130] = 126,
  [131] = 131,
  [132] = 132,
  [133] = 124,
  [134] = 126,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 119,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 124,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 145,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 156,
  [192] = 192,
  [193] = 193,
  [194] = 166,
  [195] = 159,
  [196] = 157,
  [197] = 173,
  [198] = 156,
  [199] = 192,
  [200] = 145,
  [201] = 166,
  [202] = 159,
  [203] = 157,
  [204] = 173,
  [205] = 205,
  [206] = 206,
  [207] = 186,
  [208] = 208,
  [209] = 161,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 186,
  [214] = 214,
  [215] = 161,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 192,
  [220] = 220,
  [221] = 221,
  [222] = 160,
  [223] = 220,
  [224] = 224,
  [225] = 225,
  [226] = 220,
  [227] = 227,
  [228] = 160,
  [229] = 168,
  [230] = 230,
  [231] = 231,
  [232] = 183,
  [233] = 168,
  [234] = 230,
  [235] = 235,
  [236] = 183,
  [237] = 237,
  [238] = 230,
  [239] = 239,
  [240] = 240,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(111);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(91);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(185);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(185);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(185);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(202);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 23:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 51:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 58:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 60:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 62:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 63:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(102);
      END_STATE();
    case 67:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 68:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 69:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 72:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 74:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 78:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 79:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 80:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 81:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 83:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 84:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 85:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 86:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 89:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 90:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(9);
      END_STATE();
    case 91:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 92:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 96:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 97:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 101:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 102:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 103:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 104:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 106:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 107:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 108:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_with_declaration_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_with_declaration_token2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_project_declaration_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_project_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_project_declaration_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_project_declaration_token3);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_project_declaration_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_project_qualifier_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_project_qualifier_token2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_project_qualifier_token3);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_project_qualifier_token4);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_project_qualifier_token5);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__project_extension_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__project_extension_token2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_empty_declaration_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_empty_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_package_declaration_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_package_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__package_renaming_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_literal_at_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_builtin_function_call_token1);
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_builtin_function_call_token1);
      if (lookahead == '_') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_builtin_function_call_token2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_builtin_function_call_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_typed_string_declaration_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_typed_string_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_case_construction_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_case_construction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_case_item_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_case_item_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__others_designator_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_attribute_declaration_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_attribute_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_attribute_declaration_token2);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '_') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_with_declaration_token1] = ACTIONS(1),
    [aux_sym_with_declaration_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_project_declaration_token1] = ACTIONS(1),
    [aux_sym_project_declaration_token2] = ACTIONS(1),
    [aux_sym_project_declaration_token3] = ACTIONS(1),
    [aux_sym_project_qualifier_token1] = ACTIONS(1),
    [aux_sym_project_qualifier_token2] = ACTIONS(1),
    [aux_sym_project_qualifier_token3] = ACTIONS(1),
    [aux_sym_project_qualifier_token4] = ACTIONS(1),
    [aux_sym_project_qualifier_token5] = ACTIONS(1),
    [aux_sym__project_extension_token1] = ACTIONS(1),
    [aux_sym__project_extension_token2] = ACTIONS(1),
    [aux_sym_empty_declaration_token1] = ACTIONS(1),
    [aux_sym_package_declaration_token1] = ACTIONS(1),
    [aux_sym__package_renaming_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [aux_sym_string_literal_at_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [aux_sym_builtin_function_call_token1] = ACTIONS(1),
    [aux_sym_builtin_function_call_token2] = ACTIONS(1),
    [aux_sym_typed_string_declaration_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [aux_sym_case_construction_token1] = ACTIONS(1),
    [aux_sym_case_item_token1] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym__others_designator_token1] = ACTIONS(1),
    [aux_sym_attribute_declaration_token1] = ACTIONS(1),
    [aux_sym_attribute_declaration_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_project] = STATE(210),
    [aux_sym__context_clause] = STATE(27),
    [sym_with_declaration] = STATE(27),
    [sym_project_declaration] = STATE(208),
    [sym_project_qualifier] = STATE(206),
    [aux_sym_with_declaration_token1] = ACTIONS(5),
    [aux_sym_with_declaration_token2] = ACTIONS(7),
    [aux_sym_project_declaration_token1] = ACTIONS(9),
    [aux_sym_project_qualifier_token1] = ACTIONS(11),
    [aux_sym_project_qualifier_token2] = ACTIONS(11),
    [aux_sym_project_qualifier_token3] = ACTIONS(13),
    [aux_sym_project_qualifier_token4] = ACTIONS(11),
    [aux_sym_project_qualifier_token5] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_project_declaration_token3,
    ACTIONS(17), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(19), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(21), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_case_construction_token1,
    ACTIONS(25), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(9), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [36] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_project_declaration_token3,
    ACTIONS(17), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(19), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(21), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_case_construction_token1,
    ACTIONS(25), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(8), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [72] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(19), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(21), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_case_construction_token1,
    ACTIONS(25), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_project_declaration_token3,
    STATE(3), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [108] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(19), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(21), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_case_construction_token1,
    ACTIONS(25), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_project_declaration_token3,
    STATE(8), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [144] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(19), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(21), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_case_construction_token1,
    ACTIONS(25), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_project_declaration_token3,
    STATE(5), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [180] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(19), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(21), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_case_construction_token1,
    ACTIONS(25), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym_project_declaration_token3,
    STATE(8), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [216] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_project_declaration_token3,
    ACTIONS(39), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(42), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(45), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(48), 1,
      aux_sym_case_construction_token1,
    ACTIONS(51), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(8), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [252] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(19), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(21), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_case_construction_token1,
    ACTIONS(25), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(57), 1,
      aux_sym_project_declaration_token3,
    STATE(8), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [288] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(19), 1,
      aux_sym_package_declaration_token1,
    ACTIONS(21), 1,
      aux_sym_typed_string_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_case_construction_token1,
    ACTIONS(25), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_project_declaration_token3,
    STATE(7), 9,
      sym__declarative_item,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_package_declaration,
      sym_typed_string_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym_project_declaration_repeat1,
  [324] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(113), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [363] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(145), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [399] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(199), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [435] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(200), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [471] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(204), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [507] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(173), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [543] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(202), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [579] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(195), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [615] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(219), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [651] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(182), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [687] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(197), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [723] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(192), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [759] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(159), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [795] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(66), 1,
      sym_term,
    STATE(131), 1,
      sym_expression,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [831] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(61), 1,
      sym_string_literal,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(84), 1,
      sym_term,
    ACTIONS(67), 2,
      aux_sym_builtin_function_call_token1,
      aux_sym_builtin_function_call_token2,
    STATE(91), 5,
      sym_string_literal_at,
      sym_variable_reference,
      sym_project_reference,
      sym_expression_list,
      sym_builtin_function_call,
  [864] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(75), 1,
      aux_sym_case_construction_token1,
    ACTIONS(77), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(71), 2,
      aux_sym_project_declaration_token3,
      aux_sym_case_item_token1,
    STATE(29), 6,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym__package_spec_repeat1,
  [892] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_with_declaration_token1,
    ACTIONS(7), 1,
      aux_sym_with_declaration_token2,
    ACTIONS(9), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(13), 1,
      aux_sym_project_qualifier_token3,
    STATE(187), 1,
      sym_project_declaration,
    STATE(206), 1,
      sym_project_qualifier,
    STATE(36), 2,
      aux_sym__context_clause,
      sym_with_declaration,
    ACTIONS(11), 4,
      aux_sym_project_qualifier_token1,
      aux_sym_project_qualifier_token2,
      aux_sym_project_qualifier_token4,
      aux_sym_project_qualifier_token5,
  [924] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(75), 1,
      aux_sym_case_construction_token1,
    ACTIONS(77), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 2,
      aux_sym_project_declaration_token3,
      aux_sym_case_item_token1,
    STATE(26), 6,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym__package_spec_repeat1,
  [952] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(88), 1,
      aux_sym_case_construction_token1,
    ACTIONS(91), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(83), 2,
      aux_sym_project_declaration_token3,
      aux_sym_case_item_token1,
    STATE(29), 6,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym__package_spec_repeat1,
  [980] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_project_declaration_token3,
    ACTIONS(99), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(101), 1,
      aux_sym_case_construction_token1,
    ACTIONS(103), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(34), 6,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym__package_spec_repeat1,
  [1007] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(101), 1,
      aux_sym_case_construction_token1,
    ACTIONS(103), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      aux_sym_project_declaration_token3,
    STATE(34), 6,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym__package_spec_repeat1,
  [1034] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(101), 1,
      aux_sym_case_construction_token1,
    ACTIONS(103), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(109), 1,
      aux_sym_project_declaration_token3,
    STATE(30), 6,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym__package_spec_repeat1,
  [1061] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(101), 1,
      aux_sym_case_construction_token1,
    ACTIONS(103), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(111), 1,
      aux_sym_project_declaration_token3,
    STATE(31), 6,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym__package_spec_repeat1,
  [1088] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_project_declaration_token3,
    ACTIONS(113), 1,
      aux_sym_empty_declaration_token1,
    ACTIONS(116), 1,
      aux_sym_case_construction_token1,
    ACTIONS(119), 1,
      aux_sym_attribute_declaration_token1,
    ACTIONS(122), 1,
      sym_identifier,
    STATE(34), 6,
      sym__simple_declarative_item,
      sym_empty_declaration,
      sym_variable_declaration,
      sym_case_construction,
      sym_attribute_declaration,
      aux_sym__package_spec_repeat1,
  [1115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(125), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_project_declaration_token2,
      aux_sym__project_extension_token1,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_AMP,
      anon_sym_COLON_EQ,
  [1135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_with_declaration_token1,
    ACTIONS(132), 1,
      aux_sym_with_declaration_token2,
    STATE(36), 2,
      aux_sym__context_clause,
      sym_with_declaration,
    ACTIONS(135), 6,
      aux_sym_project_declaration_token1,
      aux_sym_project_qualifier_token1,
      aux_sym_project_qualifier_token2,
      aux_sym_project_qualifier_token3,
      aux_sym_project_qualifier_token4,
      aux_sym_project_qualifier_token5,
  [1157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(137), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_project_declaration_token2,
      aux_sym__project_extension_token1,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_AMP,
      anon_sym_COLON_EQ,
  [1177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_name_repeat1,
    STATE(82), 1,
      sym_expression_list,
    ACTIONS(142), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_AMP,
  [1200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_project_declaration_token2,
      aux_sym__project_extension_token1,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_AMP,
      anon_sym_COLON_EQ,
      anon_sym_DOT,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 8,
      aux_sym_with_declaration_token1,
      aux_sym_with_declaration_token2,
      aux_sym_project_declaration_token1,
      aux_sym_project_qualifier_token1,
      aux_sym_project_qualifier_token2,
      aux_sym_project_qualifier_token3,
      aux_sym_project_qualifier_token4,
      aux_sym_project_qualifier_token5,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 8,
      aux_sym_with_declaration_token1,
      aux_sym_with_declaration_token2,
      aux_sym_project_declaration_token1,
      aux_sym_project_qualifier_token1,
      aux_sym_project_qualifier_token2,
      aux_sym_project_qualifier_token3,
      aux_sym_project_qualifier_token4,
      aux_sym_project_qualifier_token5,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 8,
      aux_sym_with_declaration_token1,
      aux_sym_with_declaration_token2,
      aux_sym_project_declaration_token1,
      aux_sym_project_qualifier_token1,
      aux_sym_project_qualifier_token2,
      aux_sym_project_qualifier_token3,
      aux_sym_project_qualifier_token4,
      aux_sym_project_qualifier_token5,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_name_repeat1,
    ACTIONS(142), 5,
      anon_sym_SEMI,
      aux_sym_project_declaration_token2,
      aux_sym__project_extension_token1,
      anon_sym_SQUOTE,
      anon_sym_COLON_EQ,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 7,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_package_declaration_token1,
      aux_sym_typed_string_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_project_declaration_token2,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_project_declaration_token2,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 6,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_case_item_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 6,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_case_item_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 6,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_case_item_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 6,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_case_item_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_case_item_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 6,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_case_item_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1517] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_project_declaration_token2,
    ACTIONS(182), 1,
      aux_sym__project_extension_token1,
    ACTIONS(184), 1,
      aux_sym__package_renaming_token1,
    STATE(225), 1,
      sym__package_extension,
    STATE(227), 1,
      sym__package_renaming,
    STATE(231), 1,
      sym__package_spec,
  [1539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 6,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_case_item_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 5,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_AMP,
    STATE(72), 1,
      aux_sym_expression_repeat1,
    ACTIONS(186), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_string_literal,
    ACTIONS(192), 1,
      aux_sym__others_designator_token1,
    STATE(236), 1,
      sym_associative_array_index,
    STATE(185), 2,
      sym_string_literal_at,
      sym__others_designator,
  [1594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_project_declaration_token2,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_string_literal,
    ACTIONS(192), 1,
      aux_sym__others_designator_token1,
    STATE(232), 1,
      sym_associative_array_index,
    STATE(185), 2,
      sym_string_literal_at,
      sym__others_designator,
  [1622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 5,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_AMP,
    STATE(78), 1,
      aux_sym_expression_repeat1,
    ACTIONS(196), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 5,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      aux_sym_project_declaration_token3,
      aux_sym_empty_declaration_token1,
      aux_sym_case_construction_token1,
      aux_sym_attribute_declaration_token1,
      sym_identifier,
  [1703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_project_declaration_token2,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_AMP,
    STATE(78), 1,
      aux_sym_expression_repeat1,
    ACTIONS(200), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_string_literal,
    ACTIONS(192), 1,
      aux_sym__others_designator_token1,
    STATE(183), 1,
      sym_associative_array_index,
    STATE(185), 2,
      sym_string_literal_at,
      sym__others_designator,
  [1746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_string_literal_at_token1,
    ACTIONS(205), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_project_declaration_token3,
    ACTIONS(211), 1,
      aux_sym_case_item_token1,
    STATE(92), 2,
      sym_case_item,
      aux_sym_case_construction_repeat1,
  [1773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_case_item_token1,
    ACTIONS(215), 1,
      aux_sym_project_declaration_token3,
    STATE(95), 2,
      sym_case_item,
      aux_sym_case_construction_repeat1,
  [1797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_case_item_token1,
    ACTIONS(219), 1,
      aux_sym_project_declaration_token3,
    STATE(81), 2,
      sym_case_item,
      aux_sym_case_construction_repeat1,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_case_item_token1,
    ACTIONS(223), 1,
      aux_sym_project_declaration_token3,
    STATE(92), 2,
      sym_case_item,
      aux_sym_case_construction_repeat1,
  [1855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_case_item_token1,
    ACTIONS(225), 1,
      aux_sym_project_declaration_token3,
    STATE(88), 2,
      sym_case_item,
      aux_sym_case_construction_repeat1,
  [1869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_project_declaration_token3,
    ACTIONS(231), 1,
      aux_sym_case_item_token1,
    STATE(92), 2,
      sym_case_item,
      aux_sym_case_construction_repeat1,
  [1903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_with_declaration_repeat1,
    ACTIONS(237), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_case_item_token1,
    ACTIONS(241), 1,
      aux_sym_project_declaration_token3,
    STATE(92), 2,
      sym_case_item,
      aux_sym_case_construction_repeat1,
  [1941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_string_literal,
    ACTIONS(245), 1,
      aux_sym__others_designator_token1,
    STATE(162), 1,
      sym__others_designator,
    STATE(163), 1,
      sym_discrete_choice_list,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP,
  [1967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_with_declaration_repeat1,
  [1980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(230), 1,
      sym_variable_reference,
  [1993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_expression_list_repeat1,
  [2006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      aux_sym_with_declaration_repeat1,
  [2019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_project_declaration_token2,
    ACTIONS(263), 1,
      aux_sym__project_extension_token1,
    STATE(174), 1,
      sym__project_extension,
  [2032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_with_declaration_repeat1,
  [2045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      aux_sym_with_declaration_repeat1,
  [2058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(234), 1,
      sym_variable_reference,
  [2071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_EQ_GT,
    ACTIONS(271), 1,
      anon_sym_PIPE,
    STATE(114), 1,
      aux_sym_discrete_choice_list_repeat1,
  [2084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(56), 1,
      sym_name,
    STATE(238), 1,
      sym_variable_reference,
  [2097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      sym__others_designator,
    ACTIONS(273), 2,
      sym_string_literal,
      aux_sym__others_designator_token1,
  [2108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_EQ_GT,
    STATE(106), 1,
      aux_sym_discrete_choice_list_repeat1,
  [2121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_expression_list_repeat1,
  [2134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_with_declaration_repeat1,
  [2156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_expression_list_repeat1,
  [2169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_EQ_GT,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    STATE(114), 1,
      aux_sym_discrete_choice_list_repeat1,
  [2182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_with_declaration_repeat1,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym__project_extension_token1,
    ACTIONS(291), 1,
      aux_sym_project_declaration_token2,
    STATE(155), 1,
      sym__project_extension,
  [2208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(148), 1,
      sym_name,
  [2218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(102), 1,
      sym_name,
  [2228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      aux_sym_attribute_declaration_token2,
  [2238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym__project_extension_token2,
    ACTIONS(299), 1,
      sym_string_literal,
  [2248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(172), 1,
      sym_name,
  [2258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_project_declaration_token1,
    ACTIONS(303), 1,
      aux_sym_project_qualifier_token4,
  [2268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(218), 1,
      sym_name,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COLON,
    ACTIONS(307), 1,
      anon_sym_COLON_EQ,
  [2288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [2296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(226), 1,
      sym_name,
  [2306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      aux_sym_attribute_declaration_token2,
  [2316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(90), 1,
      sym_attribute_reference,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(217), 1,
      sym_name,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(223), 1,
      sym_name,
  [2346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(176), 1,
      sym_name,
  [2364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
      anon_sym_COLON_EQ,
  [2374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(220), 1,
      sym_name,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(240), 1,
      sym_name,
  [2394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(211), 1,
      sym_name,
  [2404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_string_literal_at_token1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      aux_sym_attribute_declaration_token2,
  [2424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_expression_list,
  [2434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(190), 1,
      sym_name,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(77), 1,
      sym_attribute_reference,
  [2454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(116), 1,
      sym_name,
  [2464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_COLON_EQ,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [2481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SEMI,
  [2488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
  [2495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [2502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [2509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [2516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [2523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
  [2530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_project_declaration_token2,
  [2537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_identifier,
  [2544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_string_literal,
  [2551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      aux_sym_project_declaration_token2,
  [2558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SEMI,
  [2565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_SEMI,
  [2572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [2579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SEMI,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym_attribute_declaration_token2,
  [2593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym_case_construction_token1,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_EQ_GT,
  [2607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_EQ_GT,
  [2614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
  [2621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_SEMI,
  [2628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_SEMI,
  [2635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_SEMI,
  [2642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
  [2649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
  [2656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_SEMI,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SEMI,
  [2677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [2684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_project_declaration_token2,
  [2691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
  [2698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_SEMI,
  [2705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
  [2712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
  [2719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_string_literal,
  [2726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym_with_declaration_token2,
  [2733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_numeric_literal,
  [2740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [2747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [2754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_string_literal,
  [2761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [2768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_case_construction_token1,
  [2775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
  [2782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      aux_sym_project_declaration_token1,
  [2789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_string_literal,
  [2796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SEMI,
  [2803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [2810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SEMI,
  [2817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_identifier,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [2831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_SEMI,
  [2838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_SEMI,
  [2845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SEMI,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_SEMI,
  [2859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SEMI,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SEMI,
  [2873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SEMI,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_SEMI,
  [2887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [2894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_string_literal,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_project_declaration_token1,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      aux_sym_case_construction_token1,
  [2922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      aux_sym_case_construction_token1,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_project_declaration_token2,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_project_declaration_token1,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_case_construction_token1,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_identifier,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_case_construction_token1,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_string_literal,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SEMI,
  [2992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [2999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_SEMI,
  [3006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COLON_EQ,
  [3013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SQUOTE,
  [3020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym_attribute_declaration_token2,
  [3027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_COLON_EQ,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_project_declaration_token2,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COLON_EQ,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SEMI,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym_attribute_declaration_token2,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_project_declaration_token2,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_SEMI,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_identifier,
  [3104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_project_declaration_token2,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [3118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_project_declaration_token2,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym_project_declaration_token2,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_project_declaration_token2,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 435,
  [SMALL_STATE(15)] = 471,
  [SMALL_STATE(16)] = 507,
  [SMALL_STATE(17)] = 543,
  [SMALL_STATE(18)] = 579,
  [SMALL_STATE(19)] = 615,
  [SMALL_STATE(20)] = 651,
  [SMALL_STATE(21)] = 687,
  [SMALL_STATE(22)] = 723,
  [SMALL_STATE(23)] = 759,
  [SMALL_STATE(24)] = 795,
  [SMALL_STATE(25)] = 831,
  [SMALL_STATE(26)] = 864,
  [SMALL_STATE(27)] = 892,
  [SMALL_STATE(28)] = 924,
  [SMALL_STATE(29)] = 952,
  [SMALL_STATE(30)] = 980,
  [SMALL_STATE(31)] = 1007,
  [SMALL_STATE(32)] = 1034,
  [SMALL_STATE(33)] = 1061,
  [SMALL_STATE(34)] = 1088,
  [SMALL_STATE(35)] = 1115,
  [SMALL_STATE(36)] = 1135,
  [SMALL_STATE(37)] = 1157,
  [SMALL_STATE(38)] = 1177,
  [SMALL_STATE(39)] = 1200,
  [SMALL_STATE(40)] = 1215,
  [SMALL_STATE(41)] = 1229,
  [SMALL_STATE(42)] = 1243,
  [SMALL_STATE(43)] = 1257,
  [SMALL_STATE(44)] = 1270,
  [SMALL_STATE(45)] = 1283,
  [SMALL_STATE(46)] = 1300,
  [SMALL_STATE(47)] = 1313,
  [SMALL_STATE(48)] = 1326,
  [SMALL_STATE(49)] = 1339,
  [SMALL_STATE(50)] = 1352,
  [SMALL_STATE(51)] = 1365,
  [SMALL_STATE(52)] = 1378,
  [SMALL_STATE(53)] = 1391,
  [SMALL_STATE(54)] = 1404,
  [SMALL_STATE(55)] = 1417,
  [SMALL_STATE(56)] = 1431,
  [SMALL_STATE(57)] = 1445,
  [SMALL_STATE(58)] = 1457,
  [SMALL_STATE(59)] = 1469,
  [SMALL_STATE(60)] = 1481,
  [SMALL_STATE(61)] = 1493,
  [SMALL_STATE(62)] = 1505,
  [SMALL_STATE(63)] = 1517,
  [SMALL_STATE(64)] = 1539,
  [SMALL_STATE(65)] = 1551,
  [SMALL_STATE(66)] = 1562,
  [SMALL_STATE(67)] = 1577,
  [SMALL_STATE(68)] = 1594,
  [SMALL_STATE(69)] = 1605,
  [SMALL_STATE(70)] = 1622,
  [SMALL_STATE(71)] = 1633,
  [SMALL_STATE(72)] = 1644,
  [SMALL_STATE(73)] = 1659,
  [SMALL_STATE(74)] = 1670,
  [SMALL_STATE(75)] = 1681,
  [SMALL_STATE(76)] = 1692,
  [SMALL_STATE(77)] = 1703,
  [SMALL_STATE(78)] = 1714,
  [SMALL_STATE(79)] = 1729,
  [SMALL_STATE(80)] = 1746,
  [SMALL_STATE(81)] = 1759,
  [SMALL_STATE(82)] = 1773,
  [SMALL_STATE(83)] = 1783,
  [SMALL_STATE(84)] = 1797,
  [SMALL_STATE(85)] = 1807,
  [SMALL_STATE(86)] = 1817,
  [SMALL_STATE(87)] = 1831,
  [SMALL_STATE(88)] = 1841,
  [SMALL_STATE(89)] = 1855,
  [SMALL_STATE(90)] = 1869,
  [SMALL_STATE(91)] = 1879,
  [SMALL_STATE(92)] = 1889,
  [SMALL_STATE(93)] = 1903,
  [SMALL_STATE(94)] = 1917,
  [SMALL_STATE(95)] = 1927,
  [SMALL_STATE(96)] = 1941,
  [SMALL_STATE(97)] = 1957,
  [SMALL_STATE(98)] = 1967,
  [SMALL_STATE(99)] = 1980,
  [SMALL_STATE(100)] = 1993,
  [SMALL_STATE(101)] = 2006,
  [SMALL_STATE(102)] = 2019,
  [SMALL_STATE(103)] = 2032,
  [SMALL_STATE(104)] = 2045,
  [SMALL_STATE(105)] = 2058,
  [SMALL_STATE(106)] = 2071,
  [SMALL_STATE(107)] = 2084,
  [SMALL_STATE(108)] = 2097,
  [SMALL_STATE(109)] = 2108,
  [SMALL_STATE(110)] = 2121,
  [SMALL_STATE(111)] = 2134,
  [SMALL_STATE(112)] = 2143,
  [SMALL_STATE(113)] = 2156,
  [SMALL_STATE(114)] = 2169,
  [SMALL_STATE(115)] = 2182,
  [SMALL_STATE(116)] = 2195,
  [SMALL_STATE(117)] = 2208,
  [SMALL_STATE(118)] = 2218,
  [SMALL_STATE(119)] = 2228,
  [SMALL_STATE(120)] = 2238,
  [SMALL_STATE(121)] = 2248,
  [SMALL_STATE(122)] = 2258,
  [SMALL_STATE(123)] = 2268,
  [SMALL_STATE(124)] = 2278,
  [SMALL_STATE(125)] = 2288,
  [SMALL_STATE(126)] = 2296,
  [SMALL_STATE(127)] = 2306,
  [SMALL_STATE(128)] = 2316,
  [SMALL_STATE(129)] = 2326,
  [SMALL_STATE(130)] = 2336,
  [SMALL_STATE(131)] = 2346,
  [SMALL_STATE(132)] = 2354,
  [SMALL_STATE(133)] = 2364,
  [SMALL_STATE(134)] = 2374,
  [SMALL_STATE(135)] = 2384,
  [SMALL_STATE(136)] = 2394,
  [SMALL_STATE(137)] = 2404,
  [SMALL_STATE(138)] = 2414,
  [SMALL_STATE(139)] = 2424,
  [SMALL_STATE(140)] = 2434,
  [SMALL_STATE(141)] = 2444,
  [SMALL_STATE(142)] = 2454,
  [SMALL_STATE(143)] = 2464,
  [SMALL_STATE(144)] = 2474,
  [SMALL_STATE(145)] = 2481,
  [SMALL_STATE(146)] = 2488,
  [SMALL_STATE(147)] = 2495,
  [SMALL_STATE(148)] = 2502,
  [SMALL_STATE(149)] = 2509,
  [SMALL_STATE(150)] = 2516,
  [SMALL_STATE(151)] = 2523,
  [SMALL_STATE(152)] = 2530,
  [SMALL_STATE(153)] = 2537,
  [SMALL_STATE(154)] = 2544,
  [SMALL_STATE(155)] = 2551,
  [SMALL_STATE(156)] = 2558,
  [SMALL_STATE(157)] = 2565,
  [SMALL_STATE(158)] = 2572,
  [SMALL_STATE(159)] = 2579,
  [SMALL_STATE(160)] = 2586,
  [SMALL_STATE(161)] = 2593,
  [SMALL_STATE(162)] = 2600,
  [SMALL_STATE(163)] = 2607,
  [SMALL_STATE(164)] = 2614,
  [SMALL_STATE(165)] = 2621,
  [SMALL_STATE(166)] = 2628,
  [SMALL_STATE(167)] = 2635,
  [SMALL_STATE(168)] = 2642,
  [SMALL_STATE(169)] = 2649,
  [SMALL_STATE(170)] = 2656,
  [SMALL_STATE(171)] = 2663,
  [SMALL_STATE(172)] = 2670,
  [SMALL_STATE(173)] = 2677,
  [SMALL_STATE(174)] = 2684,
  [SMALL_STATE(175)] = 2691,
  [SMALL_STATE(176)] = 2698,
  [SMALL_STATE(177)] = 2705,
  [SMALL_STATE(178)] = 2712,
  [SMALL_STATE(179)] = 2719,
  [SMALL_STATE(180)] = 2726,
  [SMALL_STATE(181)] = 2733,
  [SMALL_STATE(182)] = 2740,
  [SMALL_STATE(183)] = 2747,
  [SMALL_STATE(184)] = 2754,
  [SMALL_STATE(185)] = 2761,
  [SMALL_STATE(186)] = 2768,
  [SMALL_STATE(187)] = 2775,
  [SMALL_STATE(188)] = 2782,
  [SMALL_STATE(189)] = 2789,
  [SMALL_STATE(190)] = 2796,
  [SMALL_STATE(191)] = 2803,
  [SMALL_STATE(192)] = 2810,
  [SMALL_STATE(193)] = 2817,
  [SMALL_STATE(194)] = 2824,
  [SMALL_STATE(195)] = 2831,
  [SMALL_STATE(196)] = 2838,
  [SMALL_STATE(197)] = 2845,
  [SMALL_STATE(198)] = 2852,
  [SMALL_STATE(199)] = 2859,
  [SMALL_STATE(200)] = 2866,
  [SMALL_STATE(201)] = 2873,
  [SMALL_STATE(202)] = 2880,
  [SMALL_STATE(203)] = 2887,
  [SMALL_STATE(204)] = 2894,
  [SMALL_STATE(205)] = 2901,
  [SMALL_STATE(206)] = 2908,
  [SMALL_STATE(207)] = 2915,
  [SMALL_STATE(208)] = 2922,
  [SMALL_STATE(209)] = 2929,
  [SMALL_STATE(210)] = 2936,
  [SMALL_STATE(211)] = 2943,
  [SMALL_STATE(212)] = 2950,
  [SMALL_STATE(213)] = 2957,
  [SMALL_STATE(214)] = 2964,
  [SMALL_STATE(215)] = 2971,
  [SMALL_STATE(216)] = 2978,
  [SMALL_STATE(217)] = 2985,
  [SMALL_STATE(218)] = 2992,
  [SMALL_STATE(219)] = 2999,
  [SMALL_STATE(220)] = 3006,
  [SMALL_STATE(221)] = 3013,
  [SMALL_STATE(222)] = 3020,
  [SMALL_STATE(223)] = 3027,
  [SMALL_STATE(224)] = 3034,
  [SMALL_STATE(225)] = 3041,
  [SMALL_STATE(226)] = 3048,
  [SMALL_STATE(227)] = 3055,
  [SMALL_STATE(228)] = 3062,
  [SMALL_STATE(229)] = 3069,
  [SMALL_STATE(230)] = 3076,
  [SMALL_STATE(231)] = 3083,
  [SMALL_STATE(232)] = 3090,
  [SMALL_STATE(233)] = 3097,
  [SMALL_STATE(234)] = 3104,
  [SMALL_STATE(235)] = 3111,
  [SMALL_STATE(236)] = 3118,
  [SMALL_STATE(237)] = 3125,
  [SMALL_STATE(238)] = 3132,
  [SMALL_STATE(239)] = 3139,
  [SMALL_STATE(240)] = 3146,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_project_declaration_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_declaration_repeat1, 2), SHIFT_REPEAT(156),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_declaration_repeat1, 2), SHIFT_REPEAT(153),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_declaration_repeat1, 2), SHIFT_REPEAT(193),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_declaration_repeat1, 2), SHIFT_REPEAT(107),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_declaration_repeat1, 2), SHIFT_REPEAT(168),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_declaration_repeat1, 2), SHIFT_REPEAT(124),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_item, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_item, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2), SHIFT_REPEAT(198),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2), SHIFT_REPEAT(105),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2), SHIFT_REPEAT(233),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2), SHIFT_REPEAT(143),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2), SHIFT_REPEAT(191),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2), SHIFT_REPEAT(99),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2), SHIFT_REPEAT(229),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_spec_repeat1, 2), SHIFT_REPEAT(133),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_clause, 2), SHIFT_REPEAT(180),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_clause, 2), SHIFT_REPEAT(216),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_clause, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(178),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_declaration, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_declaration, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_declaration, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_declaration, 8, .production_id = 19),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_declaration, 5, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_construction, 6),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 15),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_string_declaration, 7, .production_id = 18),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 6),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_construction, 7),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_declaration, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 4, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_string_declaration, 8, .production_id = 18),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 4, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_reference, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_reference, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(25),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_at, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_reference, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_construction_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_construction_repeat1, 2), SHIFT_REPEAT(96),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_declaration_repeat1, 2), SHIFT_REPEAT(184),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_declaration_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discrete_choice_list, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discrete_choice_list, 1),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(24),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_discrete_choice_list_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_discrete_choice_list_repeat1, 2), SHIFT_REPEAT(154),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_qualifier, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_array_index, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_declaration, 8, .production_id = 11),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_declaration, 8, .production_id = 12),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 4, .production_id = 13),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 4, .production_id = 14),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__project_extension, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_declaration, 9, .production_id = 16),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 5, .production_id = 17),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 3, .production_id = 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_declaration, 7, .production_id = 8),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_declaration, 7, .production_id = 7),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_qualifier, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_renaming, 2, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [457] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_extension, 2, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_declaration, 6, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__project_extension, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gpr(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
