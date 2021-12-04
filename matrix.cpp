//
// Created by Administrator on 2021/10/17.
//

#include "matrix.h"
#include<algorithm>

bool operator<(std::array<int, 3> first, std::array<int, 3> second);

bool operator==(std::array<int, 3> first, std::array<int, 3> second);

void matrix::input(std::istream &in) {
    if (tuple.size() == len) {
        std::cout << "数组已满" << std::endl;
        return;
    }
    int row;
    int col;
    int val;
    for (int i = 0; i < len; i++) {
        in >> row >> col >> val;
        while (row > m || col > n) {
            std::cout << "you should input row<" << m << " col<" << n;
            std::cin >> row >> col >> val;
        }
        tuple.push_back(std::array<int, 3>{row - 1, col - 1, val});
        sortMatrix();
    }
}

void matrix::sortMatrix() {
    std::sort(tuple.begin(), tuple.end(), operator<);
}

bool operator<(std::array<int, 3> first, std::array<int, 3> second) {
    if (first.at(0) > second.at(0))
        return false;
    else if (first.at(0) < second.at(0))
        return true;
    else if (first.at(0) == second.at(0))
        if (first.at(1) > second.at(1))
            return false;
        else if (first.at(1) < second.at(1))
            return true;
        else if (first.at(1) == second.at(1))
            return false;
}

bool operator==(std::array<int, 3> first, std::array<int, 3> second) {
    if (first.at(0) == second.at(0) && first.at(1) == second.at(1))
        return true;
    else
        return false;
}

matrix matrix::operator+(matrix data) {
    if (m != data.m || n != data.n) {
        std::cout << "矩阵不可相加" << std::endl;
        exit(0);
    }
    matrix return_matrix = data;
    int item1 = 0;
    for (int item = 0; item != tuple.size(); item++) {
        while (return_matrix.tuple[item1] < tuple[item])
            item1++;
        if (return_matrix.tuple[item1] == tuple[item])
            return_matrix.tuple[item1].at(2) += tuple[item].at(2);
        else {
            return_matrix.tuple.push_back(tuple[item]);
            return_matrix.len++;
        }
    }
    for (auto item = return_matrix.tuple.begin(); item != return_matrix.tuple.end() && return_matrix.tuple.size() != 0;)
        if (item->at(2) == 0) {
            return_matrix.tuple.erase(item);
            return_matrix.len--;
        } else
            item++;
    return_matrix.sortMatrix();
    return return_matrix;
}

matrix matrix::operator-(matrix data) {
    if (m != data.m || n != data.n) {
        std::cout << "矩阵不可相减" << std::endl;
        exit(0);
    }
    matrix temp = data;
    for (auto item = temp.tuple.begin(); item != temp.tuple.end(); item++) {
        item->at(2) = -item->at(2);
    }
    return *this + temp;
}

void matrix::print() {
    std::vector<std::vector<int>> out;
    for (int i = 0; i < m; i++) {
        std::vector<int> temp(n);
        out.push_back(temp);
    }
    if (tuple.size() != 0)
        for (auto item = tuple.begin(); item != tuple.end(); item++)
            out[item->at(0)][item->at(1)] = item->at(2);
    for (auto item = out.begin(); item != out.end(); item++) {
        for (auto item1 = item->begin(); item1 != item->end(); item1++)
            printf("%3d", *item1);
        std::cout << std::endl;
    }
}