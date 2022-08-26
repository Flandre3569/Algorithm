#include<bits/stdc++.h>
using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;


// L是个带头结点的单链表，L具有n个元素
// 本算法是检测链表是否是中心对称的
// 思路：先让前一半的元素入栈，然后和后一半的元素进行匹配，如果匹配到相同的就出栈，看最后栈是否为空
// 类似栈的括号问题，附加对于奇偶元素个数情况的分类处理。
int dc(LinkList L, int n) {
  char s[n / 2];
  int i;
  LinkList p = L->next;
  for (i = 0; i < n/2; i++) {
    s[i] = p->data;
    p = p->next;
  }
  i--;
  if(n%2 == 1) {
    p = p->next;
  }
  while(p != NULL && s[i] == p->data) {
    i--;
    p = p->next;
  }
  if (i == -1)
    return 1;
  return 0;
}