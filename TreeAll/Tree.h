//
// Created by Administrator on 2021/10/21.
//
//处理各种二叉树的基本操作，不保存树
#include <vector>
#include "node.h"


#ifndef TREE_TREE_H
#define TREE_TREE_H

class Tree {
public:
    Tree() = default;

//    根据一个数组以层序遍历创建二叉树，nullDate是空格字符
    std::shared_ptr<NodeTree> floorOrderCreateTree(std::vector<Type> dataArray, Type nullDate);

//    根据一个数组以先序遍历创建二叉树，nullDate是空格字符
    std::shared_ptr<NodeTree> preOrderCreatTree(std::vector<Type> dataArray, Type nullDate) {
        std::shared_ptr<NodeTree> root(new NodeTree);
        PreOrderCreatTree(root, dataArray, nullDate);
        return root;
    }

//    层序遍历，用conductData提供的函数访问二叉树
    void floorOrderTraverse(std::shared_ptr<NodeTree> root, void(&conductData)(std::shared_ptr<NodeTree> node));

//    先序遍历，用conductData提供的函数访问二叉树
    void preOrderTraverse(std::shared_ptr<NodeTree> root, void(&conductData)(std::shared_ptr<NodeTree> node));

//    中序遍历，用conductData提供的函数访问二叉树
    void inOrderTraverse(std::shared_ptr<NodeTree> root, void(&conductData)(std::shared_ptr<NodeTree> node));

//    后序遍历，用conductData提供的函数访问二叉树
    void postOrderTraverse(std::shared_ptr<NodeTree> root, void(&conductData)(std::shared_ptr<NodeTree> node));

//    深度计算
    int maxDepth(std::shared_ptr<NodeTree> root) {
        int depth = 0;
        MaxDepth(root, depth, 0);
        return depth;
    }

private:
    void PreOrderCreatTree(std::shared_ptr<NodeTree> root, std::vector<Type> &dataArray, Type nullDate);

    void MaxDepth(std::shared_ptr<NodeTree> root, int &depth, int tempDepth);
};

#endif //TREE_TREE_H
