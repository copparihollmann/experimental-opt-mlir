cmake_minimum_required(VERSION 3.20)
project(MlirTutorial CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -----------------------------------------------------------------------------
# 1. FIND THE LLVM/MLIR BUILD DIRECTORY
# This asks for a single, unambiguous path to your build directory.
# -----------------------------------------------------------------------------
set(LLVM_INSTALL_DIR "" CACHE PATH "Path to your LLVM/MLIR build directory")

if(NOT LLVM_INSTALL_DIR)
  message(FATAL_ERROR "Please specify the path to your LLVM build directory with -DLLVM_INSTALL_DIR=/path/to/build")
endif()

# -----------------------------------------------------------------------------
# 2. LOAD LLVM AND MLIR CONFIGURATION
# We force find_package to look in the exact directories we want, overriding
# any incorrect paths from your shell environment.
# -----------------------------------------------------------------------------
find_package(LLVM REQUIRED CONFIG HINTS "${LLVM_INSTALL_DIR}/lib/cmake/llvm")
find_package(MLIR REQUIRED CONFIG HINTS "${LLVM_INSTALL_DIR}/lib/cmake/mlir")

message(STATUS "Using LLVM from: ${LLVM_CMAKE_DIR}")
message(STATUS "Using MLIR from: ${MLIR_CMAKE_DIR}")

# -----------------------------------------------------------------------------
# 3. INCLUDE HELPER FUNCTIONS (THE KEY FIX)
# This explicitly loads the files that define our special functions.
# -----------------------------------------------------------------------------
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
list(APPEND CMAKE_MODULE_PATH "${MLIR_CMAKE_DIR}")

include(AddLLVM) # Defines add_lit_testsuite
include(AddMLIR) # Defines add_mlir_library

# -----------------------------------------------------------------------------
# 4. SETUP PROJECT-WIDE INCLUDES
# -----------------------------------------------------------------------------
include_directories(${MLIR_INCLUDE_DIRS} ${LLVM_INCLUDE_DIRS})
include_directories(
  ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/include
  ${PROJECT_BINARY_DIR}/include
)

# -----------------------------------------------------------------------------
# 3. ADD PROJECT SUBDIRECTORIES
# -----------------------------------------------------------------------------
add_subdirectory(lib)
add_subdirectory(include)
add_subdirectory(tools)
add_subdirectory(tests)