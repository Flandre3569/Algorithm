#include<bits/stdc++.h>
using namespace std;

// 查操作，找x所属集合
int Find(int S[], int x) {
  while(S[x] >= 0) {
    x = S[x];
  }
  return x;
}

// 并操作，将两个集合合并为一个
void Union(int S[], int Root1, int Root2) {
  // 要求 Root1和Root2是不同的集合
  if(Root1 == Root2) return;

  // 合并就是直接将Root2连接到Root1的下面
  S[Root2] = Root1;
}

int main() {

  return 0;
}

// 优化：合并的时候尽量将小树合并到大树上，不增加树的高度h
// 要判断哪个树更大，需要添加一个数据项，即根节点的绝对值作为一棵树的结点总数。
void Union(int S[], int Root1, int Root2) {
  if(Root1 == Root2)
    return;
  if(S[Root2] > S[Root1]) {
    S[Root1] += S[Root2];
    S[Root2] = Root1;
  } else {
    S[Root2] += S[Root2];
    S[Root1] = Root2;
  
  }
}