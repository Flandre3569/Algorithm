#include<bits/stdc++.h>
using namespace std;

// 队满或者队空思路：
// 如果不设置tag标志位的时候，必须让rear和front相邻一个，而rear和front又都是指的元素当前的存储位置
// 所以如果不设置tag标志位，那么就必须牺牲一个存储空间
// 因此设置一个tag标志位可以节省空间,即当rear == front的时候，代表当前的队列有可能是满的也有可能是空的
// tag == 1，代表队满，tag == 0，代表队空。
int EnQueue(SqQueue &Q, ElemType x) {
  if(Q.front == Q.rear && Q.tag == 1) {
    return 0; // 队满
  }
  Q.data[Q.rear] = x;
  Q.rear = (Q.rear + 1) % MaxSize;
  tag = 1; // 将标志为赋值为1，表示有可能是处于队满状态
  return 1;
}

int DeQueue(SqQueue &Q, ElemType &x) {
  if(Q.front == Q.rear && Q.tag == 1) {
    return 0; // 队空
  }
  x = Q.data[Q.front];
  Q.front = (Q.front + 1) % MaxSize;
  Q.tag = 0;
  return 1;
}