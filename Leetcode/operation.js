/**
 * @param {string[]} strs
 * @return {string[][]}
 */

var groupAnagrams = function(strs) {
  const ans = new Map();
  for (let i = 0; i < strs.length; i++) {
    
    let every = strs[i].split('').map(c => c.charCodeAt()).sort();
    const result = every.join();
    if (ans.has(result)) {
          ans.get(result).push(strs[i])
      } else {
          ans.set(result, [strs[i]])
      }
  }
  return Array.from(ans.values())
}

const result = groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]);
console.log(result);


