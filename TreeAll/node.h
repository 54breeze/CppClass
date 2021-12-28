//
// Created by Administrator on 2021/11/9.
//
// 这里的结点类是二叉树的结点

#include <memory>

#ifndef TREE_NODE_H
#define TREE_NODE_H
#define Type int

class Node {
public:
    Node() = default;

    Type data;
};

class NodeTree : public Node {
public:
    NodeTree() = default;

    NodeTree(Type data) {
        this->data = data;
    }

    std::shared_ptr<NodeTree> left;
    std::shared_ptr<NodeTree> right;
};

class NodeHuffman : public Node {
public:
    NodeHuffman() = default;

    NodeHuffman(char data) {
        this->data = data;
    }

    std::shared_ptr<NodeHuffman> right;
    std::shared_ptr<NodeHuffman> left;
    double frequency;
};

#endif //TREE_NODE_H
