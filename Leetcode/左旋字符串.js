/**
 * @param {string} s
 * @param {number} n
 * @return {string}
 */
// var reverseLeftWords = function (s, n) {
//   return s.slice(n) + s.slice(0, n);
// };

var reverseLeftWords = function (s, n) {
  let i = n;
  let res = "";
  while (i < s.length) {
    res += s[i];
    i++;
  }
  i = 0;
  while (i < n) {
    res += s[i];
    i++;
  }

  return res;
}
console.log(reverseLeftWords("abcdefg", 2));