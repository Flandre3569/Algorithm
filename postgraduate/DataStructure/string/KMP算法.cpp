#include<bits/stdc++.h>
using namespace std;
#define MAXLEN 10

typedef struct {
  char ch[MAXLEN];
  int length;
}SString;

// 注意： KMP算法的过程与主串无关
// 通过next数组将T的指针位置进行回溯，然后省略那些已知的不用进行匹配的元素
// 在匹配之前需要进行预处理初始化next数组.
int Index_KMP(SString S, SString T, int next[]) {
  int i = 1;
  int j = 1;
  while(i <= S.length && j <= T.length) {
    if(j == 0 || S.ch[i] == T.ch[j]) {
      i++;
      j++;
    } else {
      j = next[j];
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