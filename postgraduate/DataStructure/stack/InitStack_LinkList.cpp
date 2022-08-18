#include<bits/stdc++.h>
using namespace std;

typedef struct NodeList{
  int data;
  struct NodeList *next;
} *LinkStack, SNode;

// 不带头结点
bool InitStack(LinkStack &s) {
  s = NULL;
  return true;
}

bool Push(LinkStack &s, int x) {
  SNode *n = (SNode *)malloc(sizeof(SNode));
  n->data = x;
  n->next = s;
  s = n;
  return true;
}

bool Pop(LinkStack &s, int &x) {
  if(s == NULL)
    return false;
  x = s->data;
  SNode *n = s;
  s = s->next;
  free(n);
  return true;
}

void traverseStack(LinkStack s) {
  if(s == NULL)
    return;
  SNode *cursor = s;
  while(cursor != NULL) {
    cout << cursor->data << "\t";
    cursor = cursor->next;
  }

  cout << endl;
}

int main()
{
  LinkStack s;
  InitStack(s);
  Push(s, 1);
  Push(s, 2);
  Push(s, 3);
  traverseStack(s);
  int x;
  Pop(s, x);
  cout << x << endl;
  traverseStack(s);

  return 0;
}