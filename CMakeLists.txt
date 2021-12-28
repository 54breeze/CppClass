cmake_minimum_required(VERSION 3.20)
project(CppClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppClass main.cpp Graph.cpp Graph.h matrix.cpp matrix.h Tree.cpp Tree.h node.h Huffman.cpp Huffman.h)
