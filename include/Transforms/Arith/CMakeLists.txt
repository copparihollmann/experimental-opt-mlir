set(LLVM_TARGET_DEFINITIONS Passes.td)
mlir_tablegen(Passes.h.inc -gen-pass-decls -name=Arith)
add_mlir_dialect_tablegen_target(MLIRArithExtPassIncGen)

add_mlir_doc(Passes ArithExtPasses ./ -gen-pass-doc)

