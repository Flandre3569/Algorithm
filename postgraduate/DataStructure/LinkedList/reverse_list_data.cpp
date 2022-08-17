#include<bits/stdc++.h>
using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;

// 带头结点的初始化
bool InitListWithHead(LinkList& L) {
  L = (LNode*)malloc(sizeof(LNode)); // 分配一个头结点，头结点不存储数据
  if(L == NULL)
    return false;
  L->next = NULL;
  return true;
}

// 建立链表
LinkList createList(LinkList &L) {
  int x;
  L = (LinkList)malloc(sizeof(LNode));
  LNode *s, *r = L;
  scanf("%d", &x);
  while(x != 9999) {
    s = (LNode *)malloc(sizeof(LNode));
    s->data = x;
    r->next = s;
    r = s;
    scanf("%d", &x);
  }
  r->next = NULL;
  return L;
}

// 遍历链表
void traverseList(LinkList L) {
  LNode *p = L->next;
  if(p == NULL)
    return;
    
  while(p != NULL) {
    cout << p->data << "\t";
    p = p->next;
  }
  cout << endl;
}


// 倒置链表
void reverseList(LinkList &L) {
  LNode *p = L->next;
  LNode *s;
  if(p == NULL)
    return;

  L->next = NULL;
  while (p != NULL) {
    s = (LNode *)malloc(sizeof(LNode));
    s->data = p->data;
    s->next = L->next;
    L->next = s;
    p = p->next;
  }
}

int main()
{
  LinkList L;
  InitListWithHead(L);
  createList(L);
  traverseList(L);
  reverseList(L);
  traverseList(L);
}