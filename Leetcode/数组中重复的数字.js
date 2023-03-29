/**
 * @param {number[]} nums
 * @return {number}
 */
var findRepeatNumber = function (nums) {
  if (!nums.length) return null;
  let i = 0;
  let record = [];
  while (i < nums.length) {
    if (record[nums[i]] === undefined) {
      record[nums[i]] = 1;
    } else {
      record[nums[i]]++;
      if (record[nums[i]] > 1) return nums[i];
    }
    i++;
  }

  return null;
};

const nums = [2, 3, 1, 0, 2, 5, 3];
console.log(findRepeatNumber(nums));