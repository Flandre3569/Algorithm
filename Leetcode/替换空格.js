/**
 * @param {string} s
 * @return {string}
 */
// var replaceSpace = function (s) {
//   return s.replaceAll(" ", "%20");

// };

var replaceSpace = function (s) {
  let i = 0;
  let res = "";
  while (s[i]) {
    if (s[i] === " ") {
      res += "%20";
    } else {
      res += s[i];
    }

    i++;
  }

  return res;
}


let s = "We are happy.";
console.log(replaceSpace(s));