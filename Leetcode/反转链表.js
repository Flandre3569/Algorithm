/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function (head) {
  if (head === null) return null;
  let a = head;
  let b = a.next;
  head.next = null;
  while (b != null) {
    let temp = b;
    b = b.next;
    temp.next = a;
    a = temp;
  }

  return a;
};