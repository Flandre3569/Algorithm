#include<bits/stdc++.h>
using namespace std;

struct NodeList {
  int val;
  NodeList* next;
  NodeList(int x) : val(x), next(NULL){}
};

//打印链表
void printList(NodeList* pHead){
    NodeList* pTraverse = pHead;
    if (!pTraverse) {
        return;
    }
    while (pTraverse) {
        cout<< pTraverse->val << " ";
        pTraverse = pTraverse->next;
    }
    cout<< endl;
}

// 使用栈结构来输出，则得到方向输出的结果
void R_Print(NodeList *L) {
  if(L->next != NULL) {
    R_Print(L->next);
  }
  if(L!=NULL)
    cout << (L->val) << "\t";
}

int main()
{

  NodeList *pHead;
    NodeList *pNode = new NodeList(1);
    pHead = pNode;
    NodeList *p1 = new NodeList(2);
    pNode->next = p1;
    NodeList *p2 = new NodeList(3);
    p1->next = p2;
    NodeList *p3 = new NodeList(4);
    p2->next = p3;
    R_Print(pNode);
    return 0;
}