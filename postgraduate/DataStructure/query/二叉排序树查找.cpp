#include<bits/stdc++.h>
using namespace std;

typedef struct {
  int data;
  BTNode *lChild;
  BTNode *rChild;
}BTNode, *BT;

// 非递归方式完成
BTNode *OrderBTQ(BT t, int key) {
  while(t != NULL && t->data != key) {
    if(key > t->data) {
      t = t->rChild;
    } else {
      t = t->lChild;
    }
  }

  return t;
}

// 递归方式完成
BTNode *OrderBTQ_R(BT t, int key) {
  if(t == NULL)
    return NULL;
  if(key == t->data)
    return t;
  else if(key > t->data)
    OrderBTQ_R(t->rChild, key); // 在右子树中找
  else
    OrderBTQ_R(t->lChild, key); // 在左子树中找
}
