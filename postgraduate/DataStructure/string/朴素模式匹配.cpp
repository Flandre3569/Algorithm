#include<bits/stdc++.h>
using namespace std;

#define MAXLEN 255

typedef struct {
  char ch[MAXLEN];
  int length;
}SString;

int Index(SString S, SString T) {
  int i = 1;
  int j = 1;
  while(i <= S.length && j <= T.length) {
    if(S.ch[i] == T.ch[j]) {
      i++;
      j++;
    } else {
      i = i - j + 2; // 从上次匹配地方的下一个元素开始匹配
      j = 1; // 从头开始比较
    }
  }
  if(j > T.length) {
    return i - T.length;
  } else {
    return 0;
  }
}

int main() {

  return 0;
}