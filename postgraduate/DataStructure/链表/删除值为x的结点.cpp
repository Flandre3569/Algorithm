#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int value;
	struct ListNode *next;
	ListNode(int x) :
			value(x), next(NULL) {
	}
};

void deleteX(ListNode &l, int x)
{
    ListNode* p;
    if(l == null) return;
    if(l->value == x) {
        p = l;
        l->next = l->next->next;
        free(p);
        deleteX(l, x);
    } else {
        deleteX(l->next, x);
    }
}
//给链表赋值
ListNode* CreatList(){
    ListNode* pNode = new ListNode(0);
    pNode->next = NULL;
    ListNode* pHead = pNode;

    for (int i = 1; i < 5; i++) {
        ListNode* pTemp = new ListNode(i);
        pNode->next = pTemp;
        pNode = pTemp;
    }
    return pHead;
}

//打印链表
void printList(ListNode* pHead){
    ListNode* pTraverse = pHead;
    if (!pTraverse) {
        return;
    }
    while (pTraverse) {
        cout<< pTraverse->val << " ";
        pTraverse = pTraverse->next;
    }
    cout<< endl;
}

int main()
{
    ListNode * pNode=CreatList();
    printList(pNode);

    deleteX(pNode);
    printList(pNode);

    return 0;

}
