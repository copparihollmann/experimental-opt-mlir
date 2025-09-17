#ifndef LIB_TRANSFORM_AFFINE_PASSES_H_
#define LIB_TRANSFORM_AFFINE_PASSES_H_

#include "Transforms/Affine/AffineFullUnroll.h"
#include "Transforms/Affine/AffineFullUnrollPatternRewrite.h"

namespace mlir {
namespace tutorial {

#define GEN_PASS_REGISTRATION
#include "Transforms/Affine/Passes.h.inc"

}  // namespace tutorial
}  // namespace mlir

#endif  // LIB_TRANSFORM_AFFINE_PASSES_H_