// 算法实现思路:
/*
双指针法：设置两个指针，第一个指针当做游标，固定往后遍历，
然后设置另一个指针与游标相隔k个距离，
则当游标到达最后时，倒数第k个位置就找到了。
*/

#include<bits/stdc++.h>
using namespace std;

struct NodeList {
  int val;
  NodeList* next;
  NodeList(int x) : val(x), next(NULL){}
};

int find_x_index(int k, NodeList* p) {
  NodeList *cursor = p;
  NodeList *index = p;
  while(k>0 && cursor!= NULL) {
    cursor = cursor->next;
    k--;
  }
  if(cursor == NULL)
    return 0;

  while(cursor != NULL) {
    cursor = cursor->next;
    index = index->next;
  }
  cout << index->val << endl;
  return 1;
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
  NodeList *p4 = new NodeList(5);
  p3->next = p4;

  find_x_index(2, pHead);
  return 0;
}