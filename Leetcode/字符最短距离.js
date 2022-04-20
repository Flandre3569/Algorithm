/**
 * @param {string} s
 * @param {character} c
 * @return {number[]}
 */
var shortestToChar = function(s, c) {
  const des = [];
  const res = [];
  let i = s.indexOf(c);
  // 搜索所有目标元素的下标，将下标存到des数组中
  while (i !== -1) {
      des.push(i);
      i = (i <= (s.length - 1) ? s.indexOf(c, i + 1) : -1);
  }
  
  let temp = Number.MAX_VALUE;
  for (let j = 0; j < s.length; j++) {
    for (let x = 0; x < des.length; x++) {
      if (Math.abs(j - des[x]) < temp) {
        temp = Math.abs(j - des[x]);
      }
    }
    res.push(temp);
    temp = Number.MAX_VALUE;
  }
  return res;
};

const result = shortestToChar("fbfeqwtlxfhehmvfoerg", "h");
console.log(result);