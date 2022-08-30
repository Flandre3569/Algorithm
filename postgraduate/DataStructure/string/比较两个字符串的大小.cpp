#include<bits/stdc++.h>
using namespace std;
#define MAXLEN 255

typedef struct {
  char ch[MAXLEN];
  int length;
}SString;

// 若S>T, 则返回值>0, 若S<T, 则返回值<0, 若S=T, 则返回值=0
int StrCompare(SString S, SString T) {
  for (int i = 1; i < S.length && i < T.length; i++) {
    if(S.ch[i] != T.ch[i])
      return S.ch[i] - T.ch[i];
  } 
  return S.length - T.length;
}

int main() {
  return 0;
}