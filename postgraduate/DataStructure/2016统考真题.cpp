#include<bits/stdc++.h>
using namespace std;

void DivideSort(int a[], int len) {
  int temp;
  int b[len / 2];
  int c[len % 2 == 0 ? len / 2 : len / 2 + 1];
  int cursor = 0;
  for (int i = len; i > 0; i--) {
    if(a[i] < a[i-1] && i > len / 2) {
      temp = a[i];
      a[i] = a[i - 1];
      a[i - 1] = temp;
    }
    if(i > len/2) {
      b[cursor] = a[cursor];
      cursor++;
    }
    else {
      c[cursor] = a[cursor];
      cursor++;
    }
  }
}