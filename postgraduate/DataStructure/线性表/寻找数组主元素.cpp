#include<bits/stdc++.h>
using namespace std;

//�㷨˼·����ʹ��c���ݴ��ѡ������Ԫ�أ�ʹ��count��������
//���ȴ洢�����һ��Ԫ�أ�Ȼ��ӵڶ���Ԫ�ؿ�ʼ������
//����ڶ���Ԫ�غ͵�һ��Ԫ����ȣ���count+1��
//����ڶ���Ԫ�غ͵�һ��Ԫ�ز���ȣ���count>0����count-1������cת��Ϊ�ݴ���Ԫ�أ���count������Ϊ1.
//���ѭ������������ɸѡ�г��ִ�������Ԫ�ء�
//Ȼ��������齫��Ԫ�س��ֵĴ����жϳ������ɡ�

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
