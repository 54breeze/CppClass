#include <iostream>
#include "TreeAll/RealTree.h"

int main(void) {
    RealTree tree;
    std::vector<int> dataArray{1, 2, 3, 4, 5, 6, 7};
    tree.FloorOrderCreateTree(dataArray, 0);
    tree.floorOrderPrint();
    std::cout << std::endl;
    tree.preOrderPrint();
    std::cout << std::endl;
    tree.inOrderPrint();
    std::cout << std::endl;
    tree.postOrderPrint();
    std::cout << std::endl;
    tree.MaxDepth();
    return 0;
}
