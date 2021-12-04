//
// Created by Administrator on 2021/11/9.
//
// 这里的结点类是二叉树的结点

#ifndef TREE_NODE_H
#define TREE_NODE_H

template<typename T>
class Node {
public:
    Node() {

    }

    Node(T data) {
        this->data = data;
    }

    T data;
    int weight;
    Node<T> *left = nullptr, *right = nullptr;
};

#endif //TREE_NODE_H
