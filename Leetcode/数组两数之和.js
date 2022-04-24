function solve(arr, m, n) {
  // 请完成具体实现
  arr.sort((a, b) => a - b);
  let res = 0;
  let sum = 0;
  let left = 0;
  let right = n - 1;
  while (left < right) {
    sum = arr[left] + arr[right];
    if (sum === m) {
      res++;
      left++;
      right--;
    } else if (sum < m) {
      left++;
    } else {
      right--;
    }
  }
  return res;
}

const res = solve([1, 2, 3], 9, 3);
console.log(res);
