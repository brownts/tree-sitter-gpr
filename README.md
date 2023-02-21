# GPR (GNAT Project) Grammar for Tree-Sitter

This grammar is adapted from the GPR Language Kit Parser which is part
of the [GPR project].  The grammar extracted from that parser appears
to most accurately represent the current grammar.  Ideally, the
grammar described here would be based on the production rules found in
the Project File Reference section of the [GPR Tools User's Guide],
however the rules described there are incomplete and inaccurate in
some areas.  This is likely due to evolution of the language over time
where those changes were not reflected back into the User Manual.

## Prerequisites

The following sections (i.e., building, testing, etc.)  require that
the Node tree-sitter package be installed.  This also means that Node
should be installed too.  The specific details of installing Node will
differ based on the platform.  The following is an example of how to
install it on a Debian-based system (i.e., using `apt`).

```shell
sudo apt install nodejs
```

The tree-sitter package can then be installed from the top-level
project directory.

```shell
npm install
```

## Building (Parser)

The grammar (located in `grammar.js`) can be used to generate the C
source code of a parser which recognizes the grammar.  This already
resides in the repository, but can be regenerated if the grammar is
updated.

```shell
npm run generate
```

## Building (Library)

The C-based parser can be further built into a library for use in
other applications.  The actual build commands will differ based on
the platform, but the general approach would be similar to the
following which shows an example of how to build a dynamic library on
a Linux-based system using GCC.  Similar commands can be executed on
Windows if MSYS2 is installed (although using `.dll` instead of
`.so`).

```shell
gcc -fPIC -c src/parser.c -o src/parser.o
gcc -fPIC -shared src/*.o -o src/libtree-sitter-gpr.so
```

## Testing (Corpus)

The repository currently contains some tests (although not an
exhaustive set) to test the generated parse tree for various project
files.  These tests reside in the `test/corpus` directory and follow
the convention as described in the tree-sitter documentation.  These
tests can be executed as follows:

```shell
npm run test
```

## Testing (GPR)

The [GPR project] also contains both examples and a test suite which
are used to test this parser.  This was helpful originally in
determining that the production rules in the User Manual were
insufficient.  However it is also useful in order to test potential
regressions between the tool and the grammar defined here.

In order to perform this testing, there is an assumption that the [GPR
project] exists adjacent to this project.  As such, a relative path is
used to search for and run tests on the set of GPR files found there.

The approach taken in this testing, is to use the set of GPR files in
the examples and test suites directories of that project.  The set of
files are determined based on a recursive search of the directories.
However, some of the GPR files used in the test suite are used to
check for invalid syntax, thus they are not syntactically valid.  In
order to account for these files, a "skip list" is maintained to omit
these GPR files from the set that are tested.  This list is manually
maintained and each file listed there has been inspected to verify
that they do in fact contain invalid syntax.  This list will need to
be updated if new GPR files are added which contain invalid syntax.

It was considered to be smarter about this testing and to hook into
the GPR test suite, since those tests know which should fail and which
should pass.  Unfortunately, many of the failure cases in the test
suite are not due to invalid syntax, but instead are due to semantic
issues.  Since there is not a 1-to-1 relationship between failures in
that test suite and failures due to parsing, that approach was not
pursued.

This form of testing does not guarantee that it detects all erroneous
GPR files, but it does at least make sure that valid GPR files in the
examples and test suite do not cause parsing errors.  At the heart of
this testing, the "parse" functionality of the Node tree-sitter
package is used to run each GPR file through the parser.  Currently
there are 900+ unique GPR files that are parsed using this method, so
this provides a high level of confidence.

Currently the "test harness" consists of a Makefile and some commands
known to exist in a Linux environment (i.e., `make`, `sed`, `find`,
`xargs`, etc).  Thus, this will not likely run on other platforms
(such as Windows) without special consideration, such as MSYS2.  It
has not been tested to run on anything other than Linux at the moment.

```shell
npm run gpr-test
```

## Highlighting

This project also contains tree-sitter query rules for syntax
highlighting.  A GPR file can be run through the highlighter by
supplying it on the command line.  Refer to the tree-sitter
documentation for how you can customize the theme used to colorize the
syntax.

```shell
npm run highlight hello_world.gpr
```

## Continuous Integration

This project is setup with a GitHub Action to perform much of the
steps above.  Therefore when commits and pull requests are performed,
the parser is built and the tests (both corpus and GPR) are run for
regression testing.

This action also provides a concrete example for performing the steps
above, so they can be referenced in case there are questions about
performing a specific activity.

[GPR project]: https://github.com/adacore/gpr
[GPR Tools User's Guide]: https://docs.adacore.com/gprbuild-docs/html/gprbuild_ug.html
