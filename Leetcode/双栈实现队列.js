var CQueue = function () {
  this.stack1 = [];
  this.stack2 = [];
};

/** 
 * @param {number} value
 * @return {void}
 */
CQueue.prototype.appendTail = function (value) {
  this.stack1.push(value);
  return null;
};

/**
 * @return {number}
 */
CQueue.prototype.deleteHead = function () {
  if (!(this.stack1.length || this.stack2.length)) return -1;
  if (!this.stack2.length) {
    while (this.stack1.length) {
      let num = this.stack1.pop();
      this.stack2.push(num);
    }
  }

  return this.stack2.pop();
};

/**
 * Your CQueue object will be instantiated and called as such:
 * var obj = new CQueue()
 * obj.appendTail(value)
 * var param_2 = obj.deleteHead()
 */