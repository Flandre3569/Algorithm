# 删除链表的倒数第n个节点

难度：中等

给你一个链表，删除链表的倒数第 `n` **个结点，并且返回链表的头结点。

**示例 1：**

![https://assets.leetcode.com/uploads/2020/10/03/remove_ex1.jpg](https://assets.leetcode.com/uploads/2020/10/03/remove_ex1.jpg)

```
输入：head = [1,2,3,4,5], n = 2
输出：[1,2,3,5]

```

**示例 2：**

```
输入：head = [1], n = 1
输出：[]

```

**示例 3：**

```
输入：head = [1,2], n = 1
输出：[1]

```

**提示：**

- 链表中结点的数目为 `sz`
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`

**进阶：**你能尝试使用一趟扫描实现吗？

通过次数649,327提交次数1,491,985

## 解题：

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head | !head->next) return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;

        int i = 0;
        while(i < n) {
            fast = fast->next;
            i++;
        }
        if(!fast) return head->next;
        while(fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
```

## 题解：

双指针法，快指针比慢指针快n步，先让快指针走n步，然后快指针和慢指针一起走，当快指针到链表末尾时，慢指针就处在倒数第n个位置，然后删除即可。