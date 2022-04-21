/**
 * @param {number[]} nums
 * @return {number[][]}
 */

// 二维数组去重
const removeRepeat = (arr) => {
  const obj = {};
  arr.forEach(item => !obj[item.toString()] && (obj[item.toString()] = item));
  return Object.values(obj);
}

var threeSum = function (nums) {
  // 升序排序
  nums.sort((a, b) => a - b);
  const res = [];
  for (let i = 0; i < nums.length; i++) {
    let left = i + 1;
    // 剪枝
    if (nums[i] === nums[i - 1]) continue;
    let right = nums.length - 1;
    // 搜索三数和
    while (left < right) {
      if (nums[i] + nums[left] + nums[right] === 0) {
        res.push([nums[i], nums[left], nums[right]]);
        left++;
        right--;
      } else if (nums[i] + nums[left] + nums[right] < 0) {
        left++;
      } else {
        right--;
      }
    }
  }
  const result = removeRepeat(res);
  return result;
};

const nums = [-1, 0, 1, 2, -1, -4];
const result = threeSum(nums);
console.log(result);
