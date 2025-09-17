add_executable(tutorial-opt
  tutorial-opt.cpp
)

target_link_libraries(tutorial-opt PRIVATE
  # Our custom passes, now built correctly with add_mlir_library
  AffinePasses
  ArithPasses

  MLIROptLib
  MLIRRegisterAllDialects
  MLIRRegisterAllPasses
)