#include<bits/stdc++.h>
using namespace std;

//算法设计思想： 设a,b分别为数组1和数组2的中位数
//1、若a==b，则a或b就是所求中位数（因为两个数组等长）
//2、若a<b，则舍弃数组1中较小的一半，同时舍弃数组2中较大的一半，要求舍弃的长度相等。
//3、若a>b，则舍弃数组1中较大的一半，同时舍弃数组2中较小的一半，要求舍弃的长度相等。
//重复1、2、3步骤，直到两个序列都只含有一个元素为止，较小的就是所求的中位数（结果保留整数）。

int M_Search(int num1[], int num2[], int n)
{
    int s1 = 0, s2 = 0, m1, m2, e1 = n - 1, e2 = n - 1;
    while(s1 != e1 || s2 != e2) {
        m1 = (s1 + e1) / 2;
        m2 = (s2 + e2) / 2;
        if(num1[m1] == num2[m2]) return num1[m1];
        if(num1[m1] < num2[m2]) {
            if((s1 + e1) % 2 == 0) {
                s1 = m1;
                e2 = m2;
            } else {
                s1 = m1 + 1;
                e2 = m2;
            }
        } else {
            if((s1 + e1) % 2 == 0) {
                e1 = m1;
                s2 = m2;
            } else {
                e1 = m1;
                s2 = m2 + 1;
            }
        }
    }

    return num1[s1] < num2[s2] ? num1[s1] : num2[s2];
}

int main()
{
    int num1[5] = {11, 13, 15, 17, 19};
    int num2[5] = {2, 4, 6, 8, 20};

    int res = M_Search(num1, num2, 5);
    cout << res << endl;
    return 0;
}
