#include<bits/stdc++.h>
using namespace std;
#define MaxSize 10

typedef struct {
  int data[MaxSize];
  int front, rear;
} SqQueue;

// 入队
bool EnQueue(SqQueue &Q, int x) {
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
bool DeQueue(SqQueue &Q, int &x) {
  if(Q.rear == Q.front)
    return false;
  x = Q.data[Q.front];
  Q.front = (Q.front + 1) % MaxSize;
  return true;
}

// 获得队首元素
bool GetHead(SqQueue &Q, int &x) {
  if(Q.rear == Q.front)
    return false;
  x = Q.data[Q.front];
  return true;
}

int main()
{

  return 0;
}