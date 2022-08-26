#include<bits/stdc++.h>
using namespace std;

int x;
// 栈数据结构
struct Stack {
};

// 队列数据结构
struct Queue {
};

// 判断队列是否为空
bool QueueEmpty(Queue Q) {}

// 判断栈是否为空
bool StackEmpty(Stack S) {}

// 入栈
void Push(Stack &S, int x) {}

// 出栈
void Pop(Stack &S, int &x) {}

// 元素依次出队
int DeQueue(Queue &Q) {}

// 元素依次入队
void EnQueue(Queue Q, int x) {}


void Inverser(Stack &S, Queue &Q) {
  // 本算法实现的是将队列中的元素倒置
  while(!QueueEmpty(Q)) {
    x = DeQueue(Q); // 元素依次出队
    Push(S, x); // 入栈
  }
  while(!StackEmpty(S)) {
    Pop(S, x); // 出栈
    EnQueue(Q, x); // 元素依次入队
  }
}