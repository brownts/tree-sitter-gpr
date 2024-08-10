MAKEFILE_DIR  = $(dir $(lastword $(MAKEFILE_LIST)))

TEST_DIRS =
TEST_DIRS += examples
TEST_DIRS += gpr_compliance_test_database
TEST_DIRS += testsuite

.PHONY: default $(TEST_DIRS)

GPR_DIR_NAME = gpr
GPR_BASE_DIR ?= $(MAKEFILE_DIR)../../../$(GPR_DIR_NAME)
GPR_SKIP_FILE = $(MAKEFILE_DIR)gpr_skip.txt

default: $(TEST_DIRS)

$(TEST_DIRS):
	@echo Testing against $(GPR_DIR_NAME)/$@...
	@sed 's;^;! -path */;' $(GPR_SKIP_FILE) | xargs find $(GPR_BASE_DIR)/$@ -iname '*.gpr' | sort | xargs npx tree-sitter parse --quiet --stat
