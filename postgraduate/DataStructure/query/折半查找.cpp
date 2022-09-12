#include<bits/stdc++.h>
using namespace std;

typedef struct {
  int *elem; // 动态链表基址
  int TableLen; // 表的长度
}SSTable;

// 二分查找适用于有序数组的顺序查找
int Binary_Search(SSTable L, int key) {
  int low = 0;
  int high = L.TableLen - 1;
  int mid;
  while(low <= high) {
    mid = (low + high) / 2;
    if(key > L.elem[mid]) {
      low = mid + 1; // 后半段查找
    }
    else if(key < L.elem[mid]) {
      high = mid - 1; // 前半段查找
    } else {
      return mid; // 查找成功
    }
  }

  return -1; // 查找失败
}