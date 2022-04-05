#include <bits/stdc++.h>
using namespace std;

string s;          //定义全局变量s

bool checkA(int i, int len){        //判断是否为Alice, i为下标, len为字符串长度
    if(len - i < 5)  return false;
    return s[i+1] == 'l' && s[i+2] == 'i' && s[i+3] == 'c' && s[i+4] == 'e';
}

bool checkB(int i, int len){            //判断是否为Bob, i为下标, len为字符串长度
    if(len - i < 3)  return false;
    return s[i+1] == 'o' && s[i+2] == 'b';
}

int main(){
    int k;         //定义k
    cin >> k;       //输入k
    getchar();      //吃回车

    getline(cin, s);       //整行输入字符串s
    int len = s.length();    //定义len为s的长度

    vector<int> Alice, Bob;     //定义数组记录名字出现时的下标

    for(int i = 0; i < len; i++){         //遍历字符串
        if(s[i] == 'A' && checkA(i, len)){ //如果字符为'A'判断是否为Alice
            Alice.push_back(i);             //添加下标到数组
            i += 5;               //跳过名字(名字后后空格,无需担心循环中的i++)
        }
        else if(s[i] == 'B' && checkB(i, len)){   //如果字符为'B'判断是否为Bob
            Bob.push_back(i);                   //添加下标到数组
            i += 3;               //跳过名字
        }
    }

    int As = Alice.size(), Bs = Bob.size();       //As与Bs分别为两数组元素个数
    int bl = 0, br = 0;           //bl与br分别为窗口左右边界

    long long ans = 0;          //定义答案（最后一个评测点会超过int范围）

    for(int i = 0; i < As; i++){  //遍历Alice数组元素
        while(bl < Bs && Bob[bl] < Alice[i] - k - 3)    bl++;   //维护窗口左边界
        while(br < Bs && Bob[br] <= Alice[i] + k + 5)   br++;   //维护窗口右边界
        ans += br - bl;             //答案加上窗口中元素个数
    }

    cout << ans << endl;        //输出答案
    return 0;
}
