//
// Created by Administrator on 2021/12/28.
//
#include "Tree.h"
#include <iostream>

#ifndef CPPCLASS_REALTREE_H
#define CPPCLASS_REALTREE_H

void print(std::shared_ptr<NodeTree> node);

class RealTree : private Tree {
public:
    //    根据一个数组以层序遍历创建二叉树，nullDate是空格字符
    void FloorOrderCreateTree(std::vector<Type> dataArray, Type nullDate) {
        root = floorOrderCreateTree(dataArray, nullDate);
    }

//    根据一个数组以先序遍历创建二叉树，nullDate是空格字符
    void PreOrderCreatTree(std::vector<Type> dataArray, Type nullDate) {
        root = preOrderCreatTree(dataArray, nullDate);
    }

//    层序遍历，用conductData提供的函数访问二叉树
    void floorOrderPrint() {
        floorOrderTraverse(root, print);
    }

//    先序遍历，用conductData提供的函数访问二叉树
    void preOrderPrint() {
        preOrderTraverse(root, print);
    }

//    中序遍历，用conductData提供的函数访问二叉树
    void inOrderPrint() {
        inOrderTraverse(root, print);
    }

//    后序遍历，用conductData提供的函数访问二叉树
    void postOrderPrint() {
        postOrderTraverse(root, print);
    }

//    深度计算
    void MaxDepth() {
        std::cout << maxDepth(root);
    }

private:
    std::shared_ptr<NodeTree> root;
};

#endif //CPPCLASS_REALTREE_H
