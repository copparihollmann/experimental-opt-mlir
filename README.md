# experimental-opt-mlir

## How to build the project:

```bash
# 1. Configure your project with CMake, pointing it to your LLVM installation.
cmake -B build -G Ninja \
  -DMLIR_DIR=/path/to/your/llvm-project/build/lib/cmake/mlir \
  -DLLVM_EXTERNAL_LIT=/path/to/your/llvm-project/build/bin/llvm-lit

# 2. Build everything (your libraries, tools, etc.).
ninja -C build

# 3. Run the tests using the target created by add_lit_test_suite.
ninja -C build check-mlir-tutorial
```

### Notes to self:

```bash
cmake -B build -G Ninja \
  -DLLVM_INSTALL_DIR=/scratch2/agustin/iree/third_party/llvm-project/build \
  -DLLVM_EXTERNAL_LIT=/scratch2/agustin/iree/third_party/llvm-project/build/bin/llvm-lit
```