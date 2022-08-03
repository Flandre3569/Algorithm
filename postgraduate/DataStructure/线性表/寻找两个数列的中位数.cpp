#include<bits/stdc++.h>
using namespace std;

//�㷨���˼�룺 ��a,b�ֱ�Ϊ����1������2����λ��
//1����a==b����a��b����������λ������Ϊ��������ȳ���
//2����a<b������������1�н�С��һ�룬ͬʱ��������2�нϴ��һ�룬Ҫ�������ĳ�����ȡ�
//3����a>b������������1�нϴ��һ�룬ͬʱ��������2�н�С��һ�룬Ҫ�������ĳ�����ȡ�
//�ظ�1��2��3���裬ֱ���������ж�ֻ����һ��Ԫ��Ϊֹ����С�ľ����������λ�������������������

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
