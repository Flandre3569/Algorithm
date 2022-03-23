 #include<stdio.h>
 #include<iostream>
 using namespace std;

 int table[10][100]={0};
 int tableTwo[10][100];
 int flag[10]={-1};


 int Knapsack(int v[],int w[],int c,int n){//value weight capacity num
 	for(int i=1;i<n+1;i++){//因为涉及到i-1的计算，所以下标从1开始
 		for(int j=1;j<c+1;j++){
 			if(j<w[i]){
 				table[i][j]=table[i-1][j];
 				//flag[i]=0;
 			}else{
 				table[i][j]=max(table[i-1][j],table[i-1][j-w[i]]+v[i]);
 				//flag[i]=table[i-1][j]>(table[i-1][j-w[i]]+v[i])?0:1;
 			}
 		}
 	}
 	return table[n][c];
 }
 int KnapsackTwo(int v[],int w[],int c,int n){//此方法从n->1计算 。自底向上，自左向右
 	int jMax=min(w[n]-1,c);
 	for(int j=0;j<jMax;j++)tableTwo[n][j]=0;//j<当前背包容量或者当前物品重量时，tableTwo[n][j]=0;
 	for(int j=w[n];j<=c;j++)tableTwo[n][j]=v[n];//当前背包容量可以装得下时， tableTwo[n][j]=v[n];
	for(int i=n-1;i>1;i--){
		jMax=min(w[i],c);
		for(int j=0;j<=jMax;j++)tableTwo[i][j]=tableTwo[i+1][j];
		for(int j=w[i];j<=c;j++)tableTwo[i][j]=max(tableTwo[i+1][j],tableTwo[i+1][j-w[i]]+v[i]);//当前背包容量装得下，但是要判断其价值是否最大，确定到底装不装
	}
	tableTwo[1][c]=tableTwo[2][c];//先假设1物品不装
	if(c>=w[1])tableTwo[1][c]=max(tableTwo[1][c],tableTwo[2][c-w[1]]+v[1]);//根据价值，判断到底装不装
	return tableTwo[1][c];//返回最优值
  }
 void Traceback(int w[],int c,int n){//根据最优值，求最优解
 	for(int i=1;i<n;i++){
 		if(tableTwo[i][c]==tableTwo[i+1][c])flag[i]=0;
 		else {
 			flag[i]=1;
			c-=w[i];
 		}
 	}
 	flag[n]=tableTwo[n][c]?1:0;
 }

 int main(){
 	int weight[6]={0,2,2,6,5,4};//最低位补了0，从weight[1]开始赋值
 	int value[6]={0,6,3,5,4,6};
 	int c=10;
 	cout<<"第一种方法->总价值最大为："<<Knapsack(value,weight,c,5)<<endl;
 	cout<<"第二种方法->总价值最大为："<<KnapsackTwo(value,weight,c,5)<<endl;
 	Traceback(weight,c,5);
 	cout<<"最优值的解：";
 	for(int i=1;i<5+1;i++)cout<<flag[i]<<" ";
 	cout<<endl;
 	for(int i=1;i<6;i++){
 		for(int j=0;j<11;j++){
 			printf("%2d ",tableTwo[i][j]);
 		}
 		cout<<endl;
 	}
 	return 0;
 }
