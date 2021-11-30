 #include<iostream>
 #include<cmath>
 #include<algorithm>
 using namespace std;

 int main()
 {
     int a[3010];
     int b[3010];
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
     }
     for(int i=1;i<=n-1;i++)
     {
         b[i]=abs(a[i]-a[i+1]);
     }
     sort(b,b+n);

     for(int i=1;i<=n-1;i++)
     {
         if(b[i]!=i)
         {
             cout<<"Not jolly";
             return 0;
         }
     }
     cout<<"Jolly";
     return 0;
 }