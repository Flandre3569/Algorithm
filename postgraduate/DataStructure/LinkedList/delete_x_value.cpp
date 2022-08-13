#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

// //给链表赋值
// ListNode* CreatList(){
//     ListNode* pNode = new ListNode(0);
//     pNode->next = NULL;
//     ListNode* pHead = pNode;

//     for (int i = 1; i < 5; i++) {
//         ListNode* pTemp = new ListNode(i);
//         pNode->next = pTemp;
//         pNode = pTemp;
//     }
//     return pHead;
// }

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

void delX(ListNode* L, int x) {
    ListNode *p;
    if(L == NULL) return;
    if(L->val == x) {
        p = L;
        L->next = L->next->next;
        free(p);
        delX(L, x);
    } else {
        L = L->next;
        delX(L, x);
    }
}

int main()
{
    ListNode *pHead;
    ListNode *pNode = new ListNode(1);
    pHead = pNode;
    ListNode *p1 = new ListNode(2);
    pNode->next = p1;
    ListNode *p2 = new ListNode(3);
    p2->next = p2;
    ListNode *p3 = new ListNode(4);
    p2->next = p3;

    delX(pHead, 3);
    printList(pHead);

    return 0;
}
