MAKEFILE_DIR  = $(dir $(lastword $(MAKEFILE_LIST)))

.PHONY: default examples testsuite build

GPR_BASE_DIR ?= $(MAKEFILE_DIR)../../../gpr
GPR_SKIP_FILE = $(MAKEFILE_DIR)gpr_skip.txt

default: examples testsuite

examples: TEST_DIR=$(GPR_BASE_DIR)/examples
testsuite: TEST_DIR=$(GPR_BASE_DIR)/testsuite
examples testsuite:
	@sed 's;^;! -path */;' $(GPR_SKIP_FILE) | xargs find $(TEST_DIR) -iname '*.gpr' | sort | xargs npx tree-sitter parse --quiet --stat
