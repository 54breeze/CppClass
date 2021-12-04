//
// Created by Administrator on 2021/11/27.
//

#include "Graph.h"
#include <queue>

//    邻接表存图创建
void Graph::creatGraph(int VertexNum, std::vector<GraphType> VertexVector, int ArcNum,
                       std::vector<std::pair<GraphType, GraphType>> ArcVector) {
    vertexNum = VertexNum;
    arcNum = ArcNum;
    for (int i = 0; i < VertexVector.size(); i++)
        vertex[VertexVector[i]] = i;
    for (int i = 0; i < arcNum; i++) {
        graph[ArcVector[i].first].outVertex[ArcVector[i].second] = 1;
        graph[ArcVector[i].second].inVertex[ArcVector[i].first] = 1;
    }
}

void Graph::creatGraph1(int VertexNum, std::vector<GraphType> VertexVector, int ArcNum,
                        std::vector<std::pair<GraphType, GraphType>> ArcVector) {
    vertexNum = VertexNum;
    arcNum = ArcNum;
    for (int i = 0; i < vertexNum; i++) {
        std::vector<int> tempVector(vertexNum, 10000);
        graph1.push_back(tempVector);
    }
    for (int i = 0; i < vertexNum; i++) {
        graph1[i][i] = 0;
    }
    for (int i = 0; i < VertexVector.size(); i++)
        vertex[VertexVector[i]] = i;
    for (int i = 0; i < arcNum; i++) {
        graph1[vertex[ArcVector[i].first]][vertex[ArcVector[i].second]] = 1;
    }
}

void Graph::floyd() {
    floydGraph = graph1;
    for (int k = 0; k < vertexNum; k++)
        for (int j = 0; j < vertexNum; j++)
            for (int i = 0; i < vertexNum; i++)
                floydGraph[i][j] =
                        floydGraph[i][j] > floydGraph[i][k] + floydGraph[k][j] ? floydGraph[i][k] + floydGraph[k][j]
                                                                               : floydGraph[i][j];
}

int Graph::pathVertex(GraphType first, GraphType second) {
    if (first == second)
        return 0;
    std::map<GraphType, int> sign, len;
    std::queue<GraphType> queue;
    sign[first] = 1;
    len[first] = 0;
    queue.push(first);
    GraphType temp = first;
    while (queue.size() != 0) {
        temp = queue.front();
        queue.pop();
        for (auto item = graph[temp].outVertex.begin(); item != graph[temp].outVertex.end(); item++) {
            if (item->first == second) {
                return len[temp] + item->second;
            } else {
                if (sign[item->first] == 0) {
                    sign[item->first] = 1;
                    queue.push(item->first);
                    len[item->first] = len[temp] + item->second;
                }
            }
        }
    }
    return -1;
}

void Graph::Dfs(GraphType data) {
    for (auto item = graph[data].outVertex.begin(); item != graph[data].outVertex.end(); item++) {
        if (sign[item->first] == 0) {
            sign[item->first] = 1;
            printf("%c", item->first);
            Dfs(item->first);
        }
    }
}

void floyd();

void Graph::bfs(GraphType data) {
    sign[data] = 1;
    printf("%c", data);
    std::queue<char> queue;
    queue.push(data);
    while (queue.size()) {
        char temp = queue.front();
        queue.pop();
        for (auto item = graph[temp].outVertex.begin(); item != graph[temp].outVertex.end(); item++) {
            if (sign[item->first] == 0) {
                sign[item->first] = 1;
                printf("%c", item->first);
                queue.push(item->first);
            }
        }
    }
}