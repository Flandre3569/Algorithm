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

// 获取链表长度
int Getlen(LinkList L) {
  int len = 0;
  LNode *cursor = L->next;
  while(cursor != NULL) {
    len++;
    cursor = cursor->next;
  }

  return len;
}

// 寻找相同后缀的开始位置
// 先比较两个链表的长短，
// 让长的链表游标指针往后移动 长 - 短 + 1的距离，这时候便是两个链表相同长度的开始位置
// 然后两个链表的游标指针一起往后运动，直到遇到相同地址的节点
LinkList GetSameSuffix(LinkList str1, LinkList str2) {
  int len1 = Getlen(str1);
  int len2 = Getlen(str2);

  LNode *cursor1, *cursor2;
  for (cursor1 = str1; len1 > len2; len1--) {
    cursor1 = cursor1->next;
  }

  for (cursor2 = str2; len2 > len1; len2--) {
    cursor2 = cursor2->next;
  }

  while(cursor1->next != NULL && cursor1->next != cursor2->next) {
    cursor1 = cursor1->next;
    cursor2 = cursor2->next;
  }

  return cursor1->next;
}


int main()
{
  LinkList str1, str2;
  InitListWithHead(str1);
  InitListWithHead(str2);
  createList(str1);
  createList(str2);
  GetSameSuffix(str1, str2);  
  traverseList(str1);
}