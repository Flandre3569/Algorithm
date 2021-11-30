#include<bits/stdc++.h>
using namespace std;


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};



ListNode* ReverseList(ListNode* pHead) {

    if (pHead == NULL || pHead->next == NULL) {
        return pHead;
    }
    else {
        ListNode * tail = NULL;
        ListNode * mid = pHead;
        ListNode * start = pHead->next;
        //一直遍历
        while (1)
        {
            //修改 mid 所指节点的指向
            mid->next = tail;
            //此时判断 end 是否为 NULL，如果成立则退出循环
            if (start == NULL) {
                break;
            }
            //整体向后移动 3 个指针
            tail = mid;
            mid = start;
            start = start->next;
        }
        //最后修改 head 头指针的指向
        pHead = mid;
        return pHead;
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

    pNode=ReverseList(pNode);
    printList(pNode);

    return 0;

}
