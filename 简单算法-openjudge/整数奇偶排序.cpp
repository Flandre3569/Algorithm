 #include<iostream>
 #include<cmath>
 #include<algorithm>
 using namespace std;

 int main()
 {
     int a[10];
     int b[10];
     int c[10];
     int k = 0;
     int l = 0;
     for (int i = 0; i < 10; i++) {
         cin >> a[i];
     }

     for (int i = 0; i < 10; i++) {
         if (a[i] % 2 == 1) {
             b[k] = a[i];
             k++;
         }
         else {
             c[l] = a[i];
             l++;
         }
     }
     for (int i = 0; i < k; i++) {
         for (int j = i + 1; j < k; j++) {
             if (b[i] < b[j]) {
                 int temp = b[i];
                 b[i] = b[j];
                 b[j] = temp;
             }
         }
     }
     sort(c, c + l);
     for (int i = 0; i < k; ++i) {
         cout << b[i]<<" ";
     }
     for (int i = 0; i < l; ++i) {
         cout << c[i]<<" ";
     }
 }