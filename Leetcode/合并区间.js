/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {
    intervals.sort((a, b) => {
        return a[0] - b[0]
    })


    let result = new Array()
    for (let i = 0; i < intervals.length; i++) {
        const { length } = result
        if (length === 0 || intervals[i][0] > result[length - 1][1]) {
           result.push(intervals[i])
        } else {
           result[length-1][1] = Math.max(result[length-1][1], intervals[i][1])
        }
    }

    return result
};

const intervals = [[1,4],[4,5]];
console.log(merge(intervals))