//
// Created by Administrator on 2021/12/27.
//

#include "Huffman.h"

#include <memory>
#include <algorithm>
#include <iostream>

void Huffman::creatHuffman(std::map<char, int> HuffmanMap) {
    huffmanMap = HuffmanMap;
    for (auto item = huffmanMap.begin(); item != huffmanMap.end(); item++)
        huffmanChar.push_back(item->first);
    creatRealHuffman();
}

void Huffman::creatRealHuffman() {
    std::vector<std::shared_ptr<NodeHuffman>> list;
    for (auto item = 0; item != huffmanChar.size(); item++) {
        std::shared_ptr<NodeHuffman> temp(new NodeHuffman);
        temp->data = huffmanChar.at(item);
        temp->frequency = huffmanMap[huffmanChar.at(item)];
        list.push_back(temp);
    }
    std::sort(list.begin(), list.end(),
              [](const std::shared_ptr<NodeHuffman> &a, const std::shared_ptr<NodeHuffman> &b) {
                  return a->frequency < b->frequency;
              });
    while (list.size()) {
        std::shared_ptr<NodeHuffman> temp(new NodeHuffman);
        temp->frequency = list.at(0)->frequency + list.at(1)->frequency;
        temp->left = list.at(0);
        temp->right = list.at(1);
        list.erase(list.begin(), list.begin() + 2);
        if (list.size() == 0) {
            root = temp;
            break;
        }
        auto item = list.begin();
        for (; item != list.end() && (*item)->data > temp->data; item++);
        list.insert(item, temp);
    }
}

void Huffman::listHuffmanCode(std::shared_ptr<NodeHuffman> &node) {//列出哈夫曼编码
    if (node->left != nullptr) {
        tempVector.push_back('0');
        listHuffmanCode(node->left);
    }
    if (node->right != nullptr) {
        tempVector.push_back('1');
        listHuffmanCode(node->right);
    }
    for (auto item = 0; item != tempVector.size(); item++) {
        huffmanCode[node->data].push_back(tempVector.at(item));
    }
    tempVector.erase(tempVector.end() - 1);
}

