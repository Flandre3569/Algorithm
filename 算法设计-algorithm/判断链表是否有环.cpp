#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};


//��������ָ�룬һ����ָ��һ����ָ�룬Ȼ��������ָ��ͬʱָ��ͷָ�룬�������ָ���ܹ���������֤���л�
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr)
            return false;
        ListNode *fast=head;
        ListNode *slow=head;

        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};
