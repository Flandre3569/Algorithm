/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
  public void reorderList(ListNode head) {
    if (head == null) {
      return;
    }

  // 获得中间节点
  ListNode mid = findMid(head);

  // 中间节点之后的部分进行反转
  ListNode head2 = mid.next;
    mid.next = null;
    head2 = reverseList(head2);

  // 合并
  ListNode head1 = head;
    mergeList(head1, head2);
  }

  // LeetCode 876
  private ListNode findMid(ListNode head) {
  ListNode slow = head;
  ListNode fast = head;
    while (fast.next != null && fast.next.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow;
  }

  // LeetCode 206
  private ListNode reverseList(ListNode head) {
  ListNode prev = null;
  ListNode cur = head;
    while (cur != null) {
      ListNode nextNode = cur.next;
      cur.next = prev;
      prev = cur;
      cur = nextNode;
    }
    return prev;
  }


  private void mergeList(ListNode head1, ListNode head2) {
  ListNode next1 = null;
  ListNode next2 = null;
    while (head1 != null && head2 != null) {
      next1 = head1.next;
      next2 = head2.next;

      head1.next = head2;
      head1 = next1;

      head2.next = head1;
      head2 = next2;
    }
  }
}