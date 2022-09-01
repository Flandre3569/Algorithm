#include<bits/stdc++.h>
using namespace std;

typedef struct BiTNode {
  int data;
  BiTNode *LChird; // 左子树
  BiTNode *RChird; // 右子树

  int ltag, rtag; // 左右线索标志位

} ThreadNode;

void visit(ThreadNode *p){}; // 访问该结点

// 找到该子树的最左边的子树
ThreadNode *FristNode(ThreadNode *p) {
  while(p->ltag == 0)
    p = p->LChird;
  return p;
}

// 找到该结点的后继结点(中序)
ThreadNode *NextNode(ThreadNode *p) {
  if(p->rtag == 0)
    return FristNode(p->RChird);
  else return p->RChird;
}

// 对中序线索二叉树进行中序遍历
void Inorder(ThreadNode *T) {
  for (ThreadNode *p = FristNode(T); p != NULL; p = NextNode(p))
    visit(p); // 对当前节点进行访问
}

// 中序线索二叉树寻找前驱结点的做法和该算法思想基本相同
// 如果左标志=0,那么就找到左子树的最后遍历的结点，也就是左子树的最右边的子树
// 如果左标志=1,那么左子树就是前驱结点.