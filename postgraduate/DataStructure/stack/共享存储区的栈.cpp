#include<bits/stdc++.h>
using namespace std;

#define MaxSize 100
#define elemtp int

// 将两个栈的栈底设定在两边，初始时s1的栈顶指针为-1，s2的栈顶指针为MaxSize，两个指针相邻时表示栈已满
// s1是通常意义下的栈，s2的栈在入栈时，指针-1，代表左移，出栈时，指针+1，代表右移
// 每次进行入栈和出栈的时候都需要判断栈空和栈满的情况
typedef struct {
  elemtp stack[MaxSize];
  int top[2];
} stk;

stk s;
bool Push(int i, elemtp x) {
  if(i < 0 || i > 1) {
    printf("重新输入要入栈的栈号");
    exit(0);
  }

  if(s.top[1] - s.top[0] == 1) {
    printf("栈满");
    return false;
  }
  switch(i) {
    case 0:
      s.stack[++s.top[0]] = x;
      return true;
      break;
    case 1:
      s.stack[--s.top[1]] = x;
      return true;
      break;
  }
}

elemtp pop(int i) {
    if(i < 0 || i > 1) {
      printf("重新输入要入栈的栈号");
      exit(0);
    }
    switch (i)
    {
    case /* constant-expression */ 0:
      /* code */
      if(s.top[0] == -1) {
        printf("栈空");
        return -1;
      } else {
        return s.stack[s.top[0]--];
      }
      break;
    case 1:
      if(s.top[1] == MaxSize) {
        printf("栈空");
        return -1;
      } else {
        return s.stack[s.top[1]++];
      }
      break;
    default:
      break;
    }
}

