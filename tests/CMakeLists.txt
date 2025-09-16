# This command takes the .in template and creates the final lit.site.cfg.py file.
configure_file(lit.site.cfg.py.in lit.site.cfg.py @ONLY)

# Add all .mlir files in this directory as a lit test suite.
# This creates a "check-mlir-tutorial" target. The DEPENDS argument ensures
# our custom 'tutorial-opt' tool is built before the tests are run.
add_lit_testsuite(
  check-mlir-tutorial
  "Running MLIR Tutorial tests"
  ${CMAKE_CURRENT_BINARY_DIR}
  DEPENDS tutorial-opt
)