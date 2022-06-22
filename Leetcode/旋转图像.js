/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function(matrix) {
    for (const matrix1 of matrix) {
        for (let i = 0; i < matrix1.length / 2; i++) {
            let temp = matrix1[i];
            matrix1[i] = matrix1[matrix1.length - i - 1];
            matrix1[matrix1.length - i - 1] = temp;
        }
    }

    // [ [ 3, 2, 1 ], [ 6, 5, 4 ], [ 9, 8, 7 ] ]

    // [0][0] <-> [2][2]
    // [0][1] <-> [1][2]
    // [1][0] <-> [2][1]

    for (let i = 0; i < matrix.length; i++) {
        for (let j = 0; j < matrix.length - i; j++) {
            let temp = matrix[i][j];
            matrix[i][j] = matrix[matrix.length - 1 - j][matrix.length - 1 -i];
            matrix[matrix.length - 1 - j][matrix.length - 1 -i] = temp;
        }
    }
    return matrix;
};



const matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

console.log(rotate(matrix));