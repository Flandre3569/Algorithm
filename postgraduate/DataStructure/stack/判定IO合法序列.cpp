#include<bits/stdc++.h>
using namespace std;

// 保证初态和终态都是空栈状态
// I代表入栈，O代表出栈
// 判断操作序列是否合法
bool judge(string opt, string &res) {
  int counter = 0;
  int i = 0;
  while(opt[i] != '\0') {
    if(opt[i] == 'I') {
      counter++;
    } else if(opt[i] == 'O') {
      counter--;
    }
    i++;
  }

  if(counter != 0) {
    res = "error list";
    return false;
  } else {
    res = "correct list";
    return true;
  }
}

int main() {
  string res;
  judge("IOIIOO", res);
  cout << res << endl;
  return 0;
}