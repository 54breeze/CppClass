//
// Created by Administrator on 2021/10/21.
//
#include<vector>
#include<queue>
#include "node.h"

#ifndef TREE_TREE_H
#define TREE_TREE_H

template<typename T>
class Tree {
public:
    Tree() = default;

//    根据一个数组以层序遍历创建二叉树，nullDate是空格字符
    void createTree(std::vector<T> DataArray, T NullDate) {
        dataArray = DataArray;
        nullDate = NullDate;
        CreateTree();
    }

//    根据一个数组以先序遍历创建二叉树，nullDate是空格字符
    void preOrderCreatTree(std::vector<T> DataArray, T NullDate) {
        dataArray = DataArray;
        nullDate = NullDate;
        if (*dataArray.begin() != nullDate) {
            node = new Node<T>(*dataArray.begin());
            dataArray.erase(dataArray.begin());
        } else
            return;
        PreOrderCreatTree(node);
    }

//    用printData提供的函数，层序遍历打印二叉树
    void printTree(void(&printData)(Node<T> *node));

//    先序遍历，用conductData提供的函数访问二叉树
    void preOrderTraverse(void(&conductData)(Node<T> *node)) {
        if (node != nullptr)
            PreOrderTraverse(node, conductData);
    }

//    中序遍历，用conductData提供的函数访问二叉树
    void inOrderTraverse(void(&conductData)(Node<T> *node)) {
        if (node != nullptr)
            InOrderTraverse(node, conductData);
    }

//    后序遍历，用conductData提供的函数访问二叉树
    void postOrderTraverse(void(&conductData)(Node<T> *node)) {
        if (node != nullptr)
            PostOrderTraverse(node, conductData);
    }

//    结点计数
    void countNode();

//    深度计算
    void maxDepth() {
        if (node != nullptr)
            MaxDepth(node, 0);
    }

//    叶子个数
    int leaf = 0;
//    叶子
    std::vector<T> leafNodeArray;
//    一度结点个数
    int oneNode = 0;
//    一度结点
    std::vector<T> oneNodeArray;
//    二度结点个数
    int twoNode = 0;
//    二度结点
    std::vector<T> twoNodeArray;

//    树的深度
    int depth = 0;
private:
//    层序遍历创建二叉树
    void CreateTree();

//    先序创建，递归函数
    void PreOrderCreatTree(Node<T> *node);

//    先序遍历，递归函数
    void PreOrderTraverse(Node<T> *node, void(&conductData)(Node<T> *node));

//    中序遍历，递归函数
    void InOrderTraverse(Node<T> *node, void(&conductData)(Node<T> *node));

//    后序遍历，递归函数
    void PostOrderTraverse(Node<T> *node, void(&conductData)(Node<T> *node));

//    深度计算
    void MaxDepth(Node<T> *node, int tempDepth);

//    二叉树树根
    Node<T> *node = nullptr;
//    空指针表示符
    T nullDate;
//    生成树的根据数组
    std::vector<T> dataArray;

};

#endif //TREE_TREE_H

template<typename T>
void Tree<T>::CreateTree() {
    std::queue<Node<T> *> queue;
    auto item = dataArray.begin();
    if (item != dataArray.end() && *item != nullDate) {
        node = new Node<T>(*item++);
        queue.push(node);
    } else
        return;
    while (true) {
        if (queue.empty())
            break;
        Node<T> *temp = queue.front();
        queue.pop();
        if (item != dataArray.end()) {
            if (*item != nullDate) {
                temp->left = new Node<T>(*item++);
                queue.push(temp->left);
            } else
                item++;
        } else
            return;
        if (item != dataArray.end()) {
            if (*item != nullDate) {
                temp->right = new Node<T>(*item++);
                queue.push(temp->right);
            } else
                item++;
        } else
            return;
    }
}

template<typename T>
void Tree<T>::PreOrderCreatTree(Node<T> *node) {
    if (*dataArray.begin() != nullDate) {
        node->left = new Node<T>(*dataArray.begin());
        dataArray.erase(dataArray.begin());
        PreOrderCreatTree(node->left);
    } else
        dataArray.erase(dataArray.begin());
    if (*dataArray.begin() != nullDate) {
        node->right = new Node<T>(*dataArray.begin());
        dataArray.erase(dataArray.begin());
        PreOrderCreatTree(node->right);
    } else
        dataArray.erase(dataArray.begin());
}

template<typename T>
void Tree<T>::printTree(void(&printData)(Node<T> *node)) {
    std::queue<Node<T> *> queue;
    if (node != nullptr)
        queue.push(node);
    while (!queue.empty()) {
        Node<T> *temp = queue.front();
        queue.pop();
        printData(temp);
        if (temp->left != nullptr)
            queue.push(temp->left);
        if (temp->right != nullptr)
            queue.push(temp->right);
    }
}

template<typename T>
void Tree<T>::PreOrderTraverse(Node<T> *node, void(&conductData)(Node<T> *node)) {
    conductData(node);
    if (node->left != nullptr)
        PreOrderTraverse(node->left, conductData);
    if (node->right != nullptr)
        PreOrderTraverse(node->right, conductData);
}

template<typename T>
void Tree<T>::InOrderTraverse(Node<T> *node, void(&conductData)(Node<T> *node)) {
    if (node->left != nullptr)
        InOrderTraverse(node->left, conductData);
    conductData(node);
    if (node->right != nullptr)
        InOrderTraverse(node->right, conductData);
}

template<typename T>
void Tree<T>::PostOrderTraverse(Node<T> *node, void(&conductData)(Node<T> *node)) {
    if (node->left != nullptr)
        PostOrderTraverse(node->left, conductData);
    if (node->right != nullptr)
        PostOrderTraverse(node->right, conductData);
    conductData(node);
}

template<typename T>
void Tree<T>::countNode() {
    std::queue<Node<T> *> queue;
    if (node != nullptr)
        queue.push(node);
    while (!queue.empty()) {
        Node<T> *temp = queue.front();
        queue.pop();
        if (temp->right != nullptr && temp->left != nullptr) {
            twoNode++;
            twoNodeArray.push_back(temp->data);
        } else if (temp->left != nullptr) {
            oneNode++;
            oneNodeArray.push_back(temp->data);
        } else if (temp->right != nullptr) {
            oneNode++;
            oneNodeArray.push_back(temp->data);
        } else {
            leaf++;
            leafNodeArray.push_back(temp->data);
        }
        if (temp->left != nullptr)
            queue.push(temp->left);
        if (temp->right != nullptr)
            queue.push(temp->right);
    }
}

template<typename T>
void Tree<T>::MaxDepth(Node<T> *node, int tempDepth) {
    tempDepth++;
    if (node->left == nullptr && node->right == nullptr) {
        depth = tempDepth > depth ? tempDepth : depth;
        tempDepth = 0;
    }
    if (node->left != nullptr)
        MaxDepth(node->left, tempDepth);
    if (node->right != nullptr)
        MaxDepth(node->right, tempDepth);
}