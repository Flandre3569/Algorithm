#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};


//设置两个指针，一个快指针一个慢指针，然后让两个指针同时指向头指针，如果两个指针能够相遇，则证明有环
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
