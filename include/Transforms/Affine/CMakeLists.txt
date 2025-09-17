set(LLVM_TARGET_DEFINITIONS Passes.td)
mlir_tablegen(Passes.h.inc -gen-pass-decls -name=Affine)
add_mlir_dialect_tablegen_target(MLIRAffineExtPassIncGen)

add_mlir_doc(Passes AffineExtPasses ./ -gen-pass-doc)

