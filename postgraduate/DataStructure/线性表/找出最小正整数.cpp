#include<bits/stdc++.h>
using namespace std;

//�㷨˼·���ÿռ任ʱ��
//��������һ������B������¼A������ʵ�λ�ã�Ԫ�ص��±�Ͷ�Ӧ������ֵ��
//�������A��iλ�õ�Ԫ�ش���0С��n����ʱ����ô�ͰѸ�λ�õ�����B��λ1��
//�������A��iλ�õ�Ԫ��С�ڵ���0���ߴ���n����ôB����ͻ��������λ�ã�����λ��Ԫ��Ϊ0��
//����������B��һ��Ԫ��Ϊ0��λ�þ�����С��������ֵ��

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
