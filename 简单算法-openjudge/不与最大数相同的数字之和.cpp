#include<iostream>
 using namespace std;

 int main()
 {
	 int a[10001];
	     int n;
	     cin >> n;
	     int max = -1;
	     int m = 0;
	     for (int i = 1; i <= n; i++)
		     {
		         cin >> a[i];
		         if (a[i] > max)
					 max = a[i];
	     }
	     for (int i = 1; i <= n; i++)
		     {
		         if (a[i] != max)
					 m = m + a[i];
		     }
	    cout << m;
	     return 0;
 }