#include<bits/stdc++.h>
using namespace std;
#define MaxSize 10

// 数据结构-二叉树
typedef struct BiTNode {
  BiTNode *data;
  BiTNode *LChird; // 左子树
  BiTNode *RChird; // 右子树

} *ThreadNode;

// 数据结构-队列
typedef struct {
  int data[MaxSize];
  int front, rear;
} SqQueue;

void visit(BiTNode *N) {} // 访问当前结点的方法

// 中序遍历
void MidTraverse(ThreadNode T) {
  if(T != NULL) {
    MidTraverse(T->LChird);
    visit(T);
    MidTraverse(T->RChird);  
  }
}

// 先序遍历
void FirTraverse(ThreadNode T) {
  if(T != NULL) {
    visit(T);
    FirTraverse(T->LChird);
    FirTraverse(T->RChird);

  }
}

// 后序遍历
void LastTraverse(ThreadNode T) {
  if(T != NULL) {
    LastTraverse(T->LChird);
    LastTraverse(T->RChird);
    visit(T);

  }
}

// 入队
bool EnQueue(SqQueue &Q, BiTNode *x) {
  if((Q.rear + 1) % MaxSize == Q.front)
    return false;
  Q.data[Q.rear] = x;
  Q.rear = (Q.rear + 1) % MaxSize;
  return true;
}

// 判断队列是否为空
bool QueueEmpty(SqQueue Q) {
  if(Q.rear == Q.front)
    return true;
  else
    return false;
}

// 出队操作
bool DeQueue(SqQueue &Q, BiTNode *x) {
  if(Q.rear == Q.front)
    return false;
  x = Q.data[Q.front];
  Q.front = (Q.front + 1) % MaxSize;
  return true;
}

// 初始化队列
void InitQueue(SqQueue){};
// 层序遍历
// 利用队列实现。
// 父结点出队的同时子结点入队
void FloTraverse(ThreadNode *T) {
  SqQueue Q;
  InitQueue(Q);
  BiTNode *p;
  EnQueue(Q, T);
  while(!QueueEmpty(Q)) {
    DeQueue(Q, p);
    visit(p);
    if(p->LChird != NULL)
      EnQueue(Q, p->LChird);
    if(p->RChird != NULL)
      EnQueue(Q, p->RChird);
  }
}