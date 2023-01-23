# CMakeList.txt : CMake project for compression-lzw, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (compression-lzw "compression-lzw.cpp" "compression-lzw.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET compression-lzw PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
