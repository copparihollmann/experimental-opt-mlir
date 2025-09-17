add_mlir_library(MLIRAffineDialectExt
  AffineFullUnrollPatternRewrite.cpp
  AffineFullUnroll.cpp

  DEPENDS 
  MLIRAffineExtPassIncGen

  LINK_LIBS PUBLIC 
  MLIRAffineDialect 
  MLIRAffineUtils 
  MLIRFuncDialect 
  MLIRPass 
  MLIRRewrite 
  MLIRTransforms
)

# Groups all affine passes
add_library(AffinePasses INTERFACE)
target_link_libraries(AffinePasses INTERFACE
  MLIRAffineDialectExt
)