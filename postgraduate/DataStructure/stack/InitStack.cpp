#include<bits/stdc++.h>
using namespace std;
#define MaxSize 10

typedef struct InitStack
{
  /* data */
  int data[MaxSize];
  int top;
} SqStack;

// 初始化栈
void InitStack(SqStack &S) {
  S.top = -1;
}

// 入栈
bool Push(SqStack &S, int x) {
  if(S.top == MaxSize - 1)
    return false;

  S.data[++S.top] = x;
  return true;
}

// 出栈,(逻辑删除栈顶元素)
bool Pop(SqStack &S, int &x) {
  if(S.top == -1)
    return false;

  // x = S.data[S.top];
  // S.top = S.top - 1;
  x = S.data[S.top--];
  return true;
}

// 读栈顶元素
bool GetTop(SqStack &S, int &x) {
  if(S.top == -1)
    return false;
  x = S.data[S.top];
  return true;
}

int main()
{
  SqStack s;
  InitStack(s);
  return 0;
}

