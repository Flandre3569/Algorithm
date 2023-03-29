/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
  if (target < nums[0] || target > nums[nums.length - 1]) return 0;

  let count = 0;
  let i = 0;
  // for (let i = 0; i < nums.length; i++) {
  //   if (nums[i] === target) count++;
  // }
  while (nums[i] < target) {
    i++;
  }
  while (nums[i] === target) {
    count++;
    i++;
  }
  return count;
};

nums = [5, 7, 7, 8, 8, 10], target = 8;
console.log(search(nums, target));