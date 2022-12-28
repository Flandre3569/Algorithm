#include<bits/stdc++.h>
using namespace std;

void ShiftLeft(int a[], int p, int n) {
  for (int i = 0; n - i > p; i++) {
    int temp = a[i];
    a[i] = a[i + p];
    a[i + p] = temp;
  }
}

void PrintResult(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
  cout << endl;
}

int main() {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  ShiftLeft(a, 3, 10);
  PrintResult(a, 10);
}