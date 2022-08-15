#include<bits/stdc++.h>
using namespace std;

typedef struct NodeList{
  int val;
  NodeList *next;
  NodeList(int x) : val(x), next(NULL){};
} LNode, *ListNode;

// 算法思路：
/*
两个指针分别指向A链表和B链表，指针指向的小的元素的一方指针后移，然后反复执行后移，直到遇到相同元素
遇到相同元素时，开辟一个新结点，然后用尾插入法逐个往后延伸即可
*/
ListNode Get_Common(NodeList *A, NodeList *B) {
  LNode *p = A, *q = B, *r, *s; // r用来始终指向C的尾结点，s用来形成符合要求的链表，也就是相同元素组成的链表
  ListNode C = (ListNode)malloc(sizeof(LNode));
  r = C; // 指向C的尾结点
  while(p != NULL, q != NULL) {
    if(p->val < q->val) {
      p = p->next;
    } else if(p->val > q->val) {
      q = q->next;
    } else {
      s = (LNode*)malloc(sizeof(LNode));
      s->val = p->val;
      r->next = s;
      r = s;
      p = p->next;
      q = q->next;
    }
  }
  r->next = NULL;
  return C;
}

int main()
{

  NodeList *pHeadA;
  NodeList *pNodeA = new NodeList(1);
  pHeadA = pNodeA;
  NodeList *pA1 = new NodeList(2);
  pNodeA->next = pA1;
  NodeList *pA2 = new NodeList(3);
  pA1->next = pA2;
  NodeList *pA3 = new NodeList(4);
  pA2->next = pA3;
  NodeList *pA4 = new NodeList(5);
  pA3->next = pA4;

  NodeList *pHeadB;
  NodeList *pNodeB = new NodeList(2);
  pHeadB = pNodeB;
  NodeList *pB1 = new NodeList(3);
  pNodeB->next = pB1;
  NodeList *pB2 = new NodeList(4);
  pB1->next = pB2;
  NodeList *pB3 = new NodeList(5);
  pB2->next = pB3;
  NodeList *pB4 = new NodeList(6);
  pB3->next = pB4;

  ListNode res = Get_Common(pHeadA, pHeadB);
  while(res != NULL) {
    cout << res->val << "\t";
    res = res->next;
    cout << endl;
  }


  return 0;
}