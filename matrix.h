//
// Created by Administrator on 2021/10/17.
// 这是关于矩阵的类，实现了矩阵的加法和减法，其他的计算方法以后补充。
// 本类采用三元组存储矩阵，所以存储稀疏矩阵时可用本类。
#include<iostream>
#include<vector>
#include<array>

#ifndef NEW_MATRIX_H
#define NEW_MATRIX_H

class matrix {
public:
    matrix() = default;

    matrix(int M, int N) : m(M), n(N) {};

    matrix(int M, int N, int LEN) : m(M), n(N), len(LEN) {};

    void input(std::istream &in);

    matrix operator+(matrix data);

    matrix operator-(matrix data);

    void operator=(matrix data) {
        m = data.m;
        n = data.n;
        len = data.len;
        tuple = data.tuple;
    }

    void print();

    void sortMatrix();

    std::vector<std::array<int, 3>> getTuple() {
        return tuple;
    };

    int getM() {
        return m;
    }

    int getN() {
        return n;
    }

    int getLen() {
        return len;
    }

private:
    int m = 0;
    int n = 0;
    int len = 0;
    std::vector<std::array<int, 3>> tuple;
};

#endif //NEW_MATRIX_H
