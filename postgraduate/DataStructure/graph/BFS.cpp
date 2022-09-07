#include<bits/stdc++.h>
using namespace std;
#define MAX_VERTEX_NUM 20

bool visited[MAX_VERTEX_NUM];

void BFSTraverse(Graph g) {
  // 初始化访问数组，将数组所有数据元素设置为false，表示未访问过
  for (i = 0; i < G.vexnum; ++i) {
    visited[i] = false;
  }
  InitQueue(Q); // 初始化队列
  for (i = 0; i < G.vexnum; ++i)
    if(!visited[i])
      BFS(g, i);
}


void BFS(Graph g, int v) { // 从顶点v出发，遍历g
  visit(v);
  visited[v] = true;
  Enqueue(Q, v); // 将顶点v入队列Q
  while(!isEmpty(Q)) {
    DeQueue(Q, v);
    for (w = FirstNeighbor(G, v); w >= 0; w=NextNeighbor(G, v, w)) // 检测所有相邻顶点
    if(!visited[w]) {
      visit(w);
      visited[w] = true;
      EnQueue(Q, w);
    }
  }
}