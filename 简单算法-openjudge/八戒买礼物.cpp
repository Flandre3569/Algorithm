#include<iostream>
 #include<cmath>
 #include<algorithm>
 using namespace std;

 int main()
 {
	 int m, n;
	 cin >> n >> m;
	 int a[510];
	 int sum = 0;
	 int num=0;
	 for (int i = 0; i < n; i++) {
		 cin >> a[i];
	 }
	 sort(a, a + n);
	 for (int i = 0; i < n; i++) {
		 sum = sum + a[i];
		 if (sum > m) {
			 num = i;
			 cout << num;
			 return 0;
		 }
	 }

	 cout << n;
	 return 0;

 }