.PHONY: all build clean

ARTIFACTS_DIR?=artifacts

all: build

artifacts:
	cmake -B$(ARTIFACTS_DIR) -H.

build: artifacts
	make -C $(ARTIFACTS_DIR)

test: build
	$(ARTIFACTS_DIR)/tests/tests

clean:
	rm -rf $(ARTIFACTS_DIR)
