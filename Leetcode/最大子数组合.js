/**
 * @param {number[]} nums
 * @return {number}
 */
const maxSubArray = nums => {
    // 数组长度，dp初始化
    const [len, dp] = [nums.length, [nums[0]]];
    // 最大值初始化为dp[0]
    let max = dp[0];
    for (let i = 1; i < len; i++) {
        dp[i] = Math.max(dp[i - 1] + nums[i], nums[i]);
        // 更新最大值
        max = Math.max(max, dp[i]);
    }
    return max;
};

const nums = [5,4,-1,7,8]
console.log(maxSubArray(nums))