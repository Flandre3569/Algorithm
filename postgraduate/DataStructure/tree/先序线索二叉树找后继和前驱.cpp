#include<bits/stdc++.h>
using namespace std;

typedef struct BiTNode {
  int data;
  BiTNode *LChird; // 左子树
  BiTNode *RChird; // 右子树

  int ltag, rtag; // 左右线索标志位

} ThreadNode;

void visit(ThreadNode *p){}; // 访问该结点

// 寻找后继
ThreadNode *NextNode(ThreadNode *p) {
  if(p->ltag == 1)
    return p->LChird;
  else if(p->rtag == 1 && p->ltag == 0)
    return p->RChird;
  else
    return NULL;
}

// 寻找前驱 需要找到父结点，可以使用三叉链表，但是如果找不到父结点，就无法找到前驱结点。
// 或者从头再遍历一遍，可以找到前驱结点。
