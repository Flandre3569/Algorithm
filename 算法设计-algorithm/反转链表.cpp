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
        //һֱ����
        while (1)
        {
            //�޸� mid ��ָ�ڵ��ָ��
            mid->next = tail;
            //��ʱ�ж� end �Ƿ�Ϊ NULL������������˳�ѭ��
            if (start == NULL) {
                break;
            }
            //��������ƶ� 3 ��ָ��
            tail = mid;
            mid = start;
            start = start->next;
        }
        //����޸� head ͷָ���ָ��
        pHead = mid;
        return pHead;
    }
}



//������ֵ
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

//��ӡ����
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
