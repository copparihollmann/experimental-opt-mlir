add_mlir_library(MLIRArithDialectExt
  MulToAdd.cpp

  DEPENDS 
  MLIRArithExtPassIncGen

  LINK_LIBS PUBLIC 
  MLIRArithDialect 
  MLIRFuncDialect 
  MLIRPass 
  MLIRRewrite 
  MLIRTransforms
)

# Groups all affine passes
add_library(ArithPasses INTERFACE)
target_link_libraries(ArithPasses INTERFACE
  MLIRArithDialectExt
)