//
// Created by Administrator on 2021/12/27.
//
#include "node.h"
#include <vector>
#include <map>

#ifndef CPPCLASS_HUFFMAN_H
#define CPPCLASS_HUFFMAN_H

class Huffman {
public:
    Huffman() = default;

//    创建哈夫曼树
    void creatHuffman(std::map<char, int> HuffmanMap);

//    列出哈夫曼编码表
    void listHuffmanCode(std::shared_ptr<NodeHuffman> &node);

    std::map<char, std::string> huffmanCode;
    std::shared_ptr<NodeHuffman> root;
private:
//    创建哈夫曼树
    void creatRealHuffman();

    std::map<char, int> huffmanMap;
    std::vector<char> huffmanChar;
    std::vector<char> tempVector;
};

#endif //CPPCLASS_HUFFMAN_H
