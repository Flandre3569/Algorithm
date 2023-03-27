/**
 * Definition for a Node.
 * function Node(val, next, random) {
 *     this.val = val;
 *     this.next = next;
 *     this.random = random;
 * };
 */

/**
 * @param {Node} head
 * @return {Node}
 */
var copyRandomList = function (head) {
  // 用 Map 存储已经复制的节点，key 为原节点，value 为新节点
  const map = new Map();

  // 递归函数，返回当前节点的复制节点
  function copy(node) {
    // 如果节点为空，直接返回 null
    if (!node) {
      return null;
    }

    // 如果节点已经复制过，直接返回对应的新节点
    if (map.has(node)) {
      return map.get(node);
    }

    // 创建新节点，存入 Map 中
    const newNode = new Node(node.val);
    map.set(node, newNode);

    // 递归复制 next 和 random 指针，并连接新节点
    newNode.next = copy(node.next);
    newNode.random = copy(node.random);

    // 返回新节点
    return newNode;
  }

  // 调用递归函数复制整个链表
  return copy(head);
};