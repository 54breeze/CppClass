//
// Created by Administrator on 2021/11/27.
//
// 这是关于图的类，分别采用邻接矩阵和邻接表存图。
// 完成了两点间距离查找，dfs遍历，bfs遍历，floyd算法。
#include <map>
#include <vector>

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H
#define GraphType int

class Vertex {
public:
    std::map<GraphType, int> outVertex;
    std::map<GraphType, int> inVertex;
};

class Graph {
public:
//    创建图的哈希表，顶点个数，顶点vector(存顶点)，弧个数，弧vector(内含vector存储的两个结点，一个权)。
    void creatGraph(int VertexNum, std::vector<GraphType> VertexVector, int ArcNum,
                    std::vector<std::pair<GraphType, GraphType>> ArcVector);

//    邻接矩阵存图创建
    void creatGraph1(int VertexNum, std::vector<GraphType> VertexVector, int ArcNum,
                     std::vector<std::pair<GraphType, GraphType>> ArcVector);

//    判断两顶点是否连通，不连通返回-1，连通返回长度。
    int pathVertex(GraphType first, GraphType second);

//    dfs
    void dfs(GraphType data) {
        sign[data] = 1;
        printf("%c", data);
        Dfs(data);
        sign.clear();
    }

//    bfs
    void bfs(GraphType data);

//    floyd算法
    void floyd();

    int vertexNum;
    std::map<GraphType, int> vertex;
    int arcNum;
    std::map<GraphType, Vertex> graph;
    std::vector<std::vector<int>> graph1;
    std::vector<std::vector<int>> floydGraph;
private:
    void Dfs(GraphType data);

    std::map<GraphType, bool> sign;
};


#endif //GRAPH_GRAPH_H
