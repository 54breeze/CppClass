//
// Created by Administrator on 2021/10/21.
//
#include <iostream>
#include <queue>
#include "Tree.h"

//    根据一个数组以层序遍历创建二叉树，nullDate是空格字符
std::shared_ptr<NodeTree> Tree::floorOrderCreateTree(std::vector<Type> dataArray, Type nullDate) {
    std::queue<std::shared_ptr<NodeTree>> queue;
    std::shared_ptr<NodeTree> root(new NodeTree);
    auto item = dataArray.begin();
    if (item != dataArray.end() && *item != nullDate) {
        root->data = *item++;
        queue.push(root);
    } else {
        std::cout << "数组长度为零，或头节点为空" << std::endl;
        return root;
    }
    while (true) {
        if (queue.empty()) {
            std::cout << "dataArray数组错误" << std::endl;
            break;
        }
        std::shared_ptr<NodeTree> temp = queue.front();
        queue.pop();
        if (item != dataArray.end()) {
            if (*item != nullDate) {
                std::shared_ptr<NodeTree> tmp(new NodeTree(*item++));
                temp->left = tmp;
                queue.push(temp->left);
            } else
                item++;
        } else {
            std::cout << "二叉树创建成功" << std::endl;
            return root;
        }
        if (item != dataArray.end()) {
            if (*item != nullDate) {
                std::shared_ptr<NodeTree> tmp(new NodeTree(*item++));
                temp->right = tmp;
                queue.push(temp->right);
            } else
                item++;
        } else {
            std::cout << "二叉树创建成功" << std::endl;
            return root;
        }
    }
}

//    根据一个数组以先序遍历创建二叉树，nullDate是空格字符
void Tree::PreOrderCreatTree(std::shared_ptr<NodeTree> root, std::vector<Type> &dataArray, Type nullDate) {
    if (*dataArray.begin() != nullDate) {
        std::shared_ptr<NodeTree> tmp(new NodeTree(*dataArray.begin()));
        root->left = tmp;
        dataArray.erase(dataArray.begin());
        PreOrderCreatTree(root->left, dataArray, nullDate);
    } else
        dataArray.erase(dataArray.begin());
    if (*dataArray.begin() != nullDate) {
        std::shared_ptr<NodeTree> tmp(new NodeTree(*dataArray.begin()));
        root->right = tmp;
        dataArray.erase(dataArray.begin());
        PreOrderCreatTree(root->right, dataArray, nullDate);
    } else
        dataArray.erase(dataArray.begin());
}

//    用printData提供的函数，层序遍历打印二叉树
void Tree::floorOrderTraverse(std::shared_ptr<NodeTree> root, void(&conductData)(std::shared_ptr<NodeTree> node)) {
    std::queue<std::shared_ptr<NodeTree>> queue;
    if (root != nullptr)
        queue.push(root);
    while (!queue.empty()) {
        std::shared_ptr<NodeTree> temp(queue.front());
        queue.pop();
        conductData(temp);
        if (temp->left != nullptr)
            queue.push(temp->left);
        if (temp->right != nullptr)
            queue.push(temp->right);
    }
}

//    先序遍历，用conductData提供的函数访问二叉树
void Tree::preOrderTraverse(std::shared_ptr<NodeTree> root, void(&conductData)(std::shared_ptr<NodeTree> node)) {
    conductData(root);
    if (root->left != nullptr)
        preOrderTraverse(root->left, conductData);
    if (root->right != nullptr)
        preOrderTraverse(root->right, conductData);
}

//    中序遍历，用conductData提供的函数访问二叉树
void Tree::inOrderTraverse(std::shared_ptr<NodeTree> root, void(&conductData)(std::shared_ptr<NodeTree> node)) {
    if (root->left != nullptr)
        inOrderTraverse(root->left, conductData);
    conductData(root);
    if (root->right != nullptr)
        inOrderTraverse(root->right, conductData);
}

//    后序遍历，用conductData提供的函数访问二叉树
void Tree::postOrderTraverse(std::shared_ptr<NodeTree> root, void(&conductData)(std::shared_ptr<NodeTree> node)) {
    if (root->left != nullptr)
        postOrderTraverse(root->left, conductData);
    if (root->right != nullptr)
        postOrderTraverse(root->right, conductData);
    conductData(root);
}

//    深度计算
void Tree::MaxDepth(std::shared_ptr<NodeTree> root, int &depth, int tempDepth) {
    tempDepth++;
    if (root->left == nullptr && root->right == nullptr) {
        depth = tempDepth > depth ? tempDepth : depth;
        tempDepth = 0;
    }
    if (root->left != nullptr)
        MaxDepth(root->left, depth, tempDepth);
    if (root->right != nullptr)
        MaxDepth(root->right, depth, tempDepth);
}