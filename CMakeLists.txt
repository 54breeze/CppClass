cmake_minimum_required(VERSION 3.20)
project(CppClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppClass main.cpp GraphAll/Graph.cpp GraphAll/Graph.h MatrixALL/matrix.cpp MatrixALL/matrix.h TreeAll/Tree.cpp TreeAll/Tree.h TreeAll/node.h TreeAll/Huffman.cpp TreeAll/Huffman.h TreeAll/RealTree.cpp TreeAll/RealTree.h)
