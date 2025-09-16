add_mlir_library(AffineFullUnroll

  AffineFullUnroll.cpp

  LINK_LIBS PUBLIC
  
  MLIRAffineDialect
  MLIRAffineUtils
  MLIRFuncDialect
  MLIRPass
  MLIRRewrite
  MLIRTransforms
)