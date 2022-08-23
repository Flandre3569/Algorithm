#include<bits/stdc++.h>
using namespace std;

typedef struct LinkNode {
  int data;
  struct LinkNode *next;
}LinkNode;

typedef struct LQueue {
  LinkNode *front, *rear;
} QueueNode;

// 初始化链表(带头结点)
bool InitQueue(QueueNode &Q) {
  Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));
  Q.front->next = NULL;
}
// 初始化(不带头结点)
// bool InitQueue(QueueNode &Q) {
//   Q.front = NULL;
//   Q.rear = NULL;
// }

// 判空
bool IsEmpty(QueueNode Q) {
  if(Q.front == Q.rear)
    return true;
  else
    return false;
}


// 入队(带头结点)
void EnQueue(QueueNode &Q, int x) {
  LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
  s->data = x;
  s->next = NULL;
  Q.rear->next = s;
  Q.rear = s;
}
// 入队(不带头结点)
// void EnQueue(QueueNode &Q, int x) {
//   LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
//   s->data = x;
//   s->next = NULL;
//   if(Q.front == NULL) {
//     Q.front = s;
//     Q.rear = s;
//   } else {
//     Q.rear->next = s;
//     Q.rear = s;
//   }
// }

// 出队(带头结点)
bool DeQueue(QueueNode &Q, int &x) {
  if(Q.front == Q.rear)
    return false;
  LinkNode *p = (LinkNode *)malloc(sizeof(LinkNode));
  x = p->data;
  Q.front->next = p->next;
  if(Q.rear == p)
    Q.rear = Q.front;
  free(p);
  return true;
}
// 出队(不带头结点)
// bool DeQueue(QueueNode &Q, int &x) {
//   if(Q.front == NULL)
//     return false;
//   LinkNode *p = Q.front;
//   x = p->data;
//   Q.front = p->next;
//   if(Q.rear == p) {
//     Q.front == NULL;
//     Q.rear == NULL;
//   }
//   free(p);
//   return true;
// }

int main()
{

  return 0;
}