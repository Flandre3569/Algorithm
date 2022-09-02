#include<bits/stdc++.h>
using namespace std;

typedef struct Thread {

  int data;
  Thread *LChild;
  Thread *RChild;
  int ltag;
  int rtag;

} ThreadNode, *ThreadTree;

ThreadNode *pre = NULL;

// 访问当前结点
void visit(ThreadNode *q) {
  if(q->LChild == NULL) {
    q->LChild = pre;
    q->ltag = 1;
  }
  if(pre != NULL && pre->RChild == NULL) {
    pre->RChild = q;
    pre->rtag = 1;
  }
  pre = q;
}

// 对当前结点进行线索化
// 边遍历边进行线索化
void InThread(ThreadTree T) {
  if(T != NULL) {
    InThread(T->LChild); // 先遍历左子树
    visit(T); // 访问该节点
    InThread(T->RChild); // 后遍历右子树
  }
}

// 中序线索化二叉树T
void CreateInThread(ThreadTree T) {
  pre = NULL;
  if(T != NULL) {
    InThread(T);
    if(pre->RChild == NULL) {
      pre->rtag = 1;
    }
  }
}

int main() {
  return 0;
}

// 先序线索化其实就是改变一下visit的位置即可。但是会出现转圈问题，需要判断ltag再进行递归
// 后续线索化也是改变一下visit的位置即可，而且不会出现转圈的问题。