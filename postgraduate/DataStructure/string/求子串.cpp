#include<bits/stdc++.h>
using namespace std;
#define MAXLEN 255

typedef struct {
  char ch[MAXLEN];
  int length;
}SString;

// 查找子串
// pos是子串的开始位置
// len是子串长度
// 即获取从pos位置开始往后len个字符的子串
bool SubString(
  SString &Sub, SString S, int pos, int len
) {
  if(pos + len - 1 > S.length) {
    return false;
  }

  for (int i = pos; i < pos + len; i++) {
    Sub.ch[i - pos + 1] = S.ch[i];
  }
  Sub.length = len;
  return true;
}

int main() {
  return 0;
}
