/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
  let cursor = 0;
  let i = 0;
  while (i <= nums.length) {
    if (nums[i] !== cursor) return cursor;
    i++;
    cursor++;
  }

  return null;
};

const nums = [0];
console.log(missingNumber(nums));