#include<bits/stdc++.h>
using namespace std;

//算法思路：（使用c来暂存待选定的主元素，使用count来计数）
//首先存储数组第一个元素，然后从第二个元素开始遍历，
//如果第二个元素和第一个元素相等，则count+1，
//如果第二个元素和第一个元素不相等，且count>0，则count-1，否则将c转变为暂存新元素，且count重新置为1.
//如此循环，到最后便能筛选中出现次数最多的元素。
//然后遍历数组将该元素出现的次数判断出来即可。

int Majority(int A[], int n)
{
    int i, c, count = 1;
    c = A[0];
    for(i = 1; i < n; i++) {
        if(A[i] == c) {
            count++;
        } else {
            if(count > 0) {
                count--;
            } else {
                c = A[i];
                count = 1;
            }
        }
    }

    if(count > 0) {
        for(i = count = 0; i < n; i++) {
            if(A[i] == c) {
                count++;
            }
        }
    }
    if(count > n/2) return c;
    else return -1;
}
int main()
{
    int A[8] = {0, 3, 3, 3, 3, 7, 3, 5};
    int res = Majority(A, 8);

    cout << res << endl;
    return 0;
}
