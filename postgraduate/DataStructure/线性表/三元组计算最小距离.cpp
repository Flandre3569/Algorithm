#include<bits/stdc++.h>
using namespace std;

#define INT_MAX_NUM 0x7fffffff

int abs_(int a) {
    if(a < 0) return -a;
    else return a;
}

bool xls_min(int a, int b, int c) {
    if(a <= b && a <= c) {
        return true;
    }
    return false;
}

int findMinOfTrip(int A[], int n, int B[], int m, int C[], int p) {
    int i = 0, j = 0, k = 0, D_min = INT_MAX_NUM, D;
    while(i < n && j < m && k < p && D_min > 0) {
        D = abs_(A[i] - B[j]) + abs_(B[j] - C[k]) + abs_(C[k] - A[i]);
        if(D < D_min) D_min = D;
        if(xls_min(A[i], B[j], C[k])) i++;
        else if(xls_min(B[j], C[k], A[i])) j++;
        else k++;
    }

    return D_min;
}

int main() {

    int A[3] = {-1, 0, 9};
    int B[4] = {-25, -10, 10, 11};
    int C[5] = {2, 9, 17, 30, 41};

    int res = findMinOfTrip(A,3, B,4, C,5);

    cout << res << endl;
    return 0;
}
