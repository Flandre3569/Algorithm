#include<iostream>
 using namespace std;

 int main()
 {
	 int a[16];
	 int sum=0;
	 int i = 0;
	
	 while (1) {
		 cin >> a[i];
		 if (a[i] == 0) {
			 break;
		 }
		 i++; 
	 }
	 i = 0;
	 int j = 0;
	 while (a[i] != 0) {
		 while (a[j] != 0) {
			 if (a[i] == 2 * a[j]) {
				 sum++;
			 }
			 j++;
		 }
		 i++;
		 j = 0;
	 }

	 cout << sum;
 }