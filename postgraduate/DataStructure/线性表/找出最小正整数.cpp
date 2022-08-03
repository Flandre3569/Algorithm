#include<bits/stdc++.h>
using namespace std;

//算法思路：用空间换时间
//首先设置一个数组B用来记录A数组访问的位置，元素的下标就对应正整数值。
//如果数组A的i位置的元素大于0小于n的数时，那么就把该位置的数组B置位1，
//如果数组A的i位置的元素小于等于0或者大于n，那么B数组就会产生空余位置，即该位置元素为0。
//最后遍历数组B第一个元素为0的位置就是最小的正整数值。

int findMissMin(int A[], int n) {
    int i, *B;
    B = (int *)malloc(sizeof(int)*n);
    memset(B, 0, sizeof(int)*n);
    for(i = 0; i < n; i++) {
        if(A[i] > 0 && A[i] <= n)
            B[A[i] - 1] = 1;
    }
    for(i = 0; i < n; i++) {
        if(B[i] == 0) break;
    }

    return i + 1;

}

int main()
{
    int A[5] = {2, 3, 4, 5, 6};
    int res = findMissMin(A, 5);
    cout << res << endl;

    return 0;
}
