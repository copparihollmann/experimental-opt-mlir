add_executable(tutorial-opt
  tutorial-opt.cpp
)

target_link_libraries(tutorial-opt PRIVATE
  # Our custom passes, now built correctly with add_mlir_library
  AffineFullUnroll
  MulToAdd

  # Link all core MLIR dependencies inside a group to resolve cycles
  LINKER:--start-group
  MLIROptLib
  MLIRRegisterAllDialects
  MLIRRegisterAllPasses
  LINKER:--end-group
)