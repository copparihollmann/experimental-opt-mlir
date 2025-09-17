#ifndef LIB_TRANSFORM_ARITH_MULTOADD_H_
#define LIB_TRANSFORM_ARITH_MULTOADD_H_

#include "mlir/Pass/Pass.h"

namespace mlir {
namespace tutorial {

#define GEN_PASS_DECL_MULTOADD
#include "Transforms/Arith/Passes.h.inc"

} // namespace tutorial
} // namespace mlir

#endif // LIB_TRANSFORM_ARITH_MULTOADD_H_