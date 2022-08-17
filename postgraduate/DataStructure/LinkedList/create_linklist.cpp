#include<bits/stdc++.h>
using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;

// 不带头结点的初始化
bool InitList(LinkList& L) {
  L = NULL;
  return true;
}

// 带头结点的初始化
bool InitListWithHead(LinkList& L) {
  L = (LNode*)malloc(sizeof(LNode)); // 分配一个头结点，头结点不存储数据
  if(L == NULL)
    return false;
  L->next = NULL;
  return true;
}

// 求表长
int getLength(LinkList L) {
  int len = 0;
  LNode *p = L;
  while(p->next != NULL) {
    p = p->next;
    len++;
  }
  return len;
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

int main()
{
  LinkList L;
  // 初始化一个空链表
  InitList(L);
  createList(L);
  traverseList(L);
  return 0;
}