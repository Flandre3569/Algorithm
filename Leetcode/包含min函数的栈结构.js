/**
 * initialize your data structure here.
 */
var MinStack = function () {
  this.minNum = 10000000000;
  this.stack = [];
};

/** 
 * @param {number} x
 * @return {void}
 */
MinStack.prototype.push = function (x) {
  if (x < this.minNum) this.minNum = x;
  this.stack.push(x);
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function () {
  let num = this.stack.pop();
  if (num === this.minNum) {
    this.minNum = 10000000000;
    for (let i = 0; i < this.stack.length; i++) {
      if (this.stack[i] < this.minNum) this.minNum = this.stack[i];
    }
  }
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
  return this.stack[this.stack.length - 1];
};

/**
 * @return {number}
 */
MinStack.prototype.min = function () {
  return this.minNum;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(x)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.min()
 */
