add_mlir_library(MulToAdd

  MulToAdd.cpp

  LINK_LIBS PUBLIC
  
  MLIRArithDialect
  MLIRFuncDialect
  MLIRPass
  MLIRRewrite
  MLIRTransforms
)
