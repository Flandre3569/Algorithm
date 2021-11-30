 #include<stdio.h>
 #include<iostream>
 using namespace std;

 int table[10][100]={0};
 int tableTwo[10][100];
 int flag[10]={-1};


 int Knapsack(int v[],int w[],int c,int n){//value weight capacity num
 	for(int i=1;i<n+1;i++){//��Ϊ�漰��i-1�ļ��㣬�����±��1��ʼ
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
 int KnapsackTwo(int v[],int w[],int c,int n){//�˷�����n->1���� ���Ե����ϣ���������
 	int jMax=min(w[n]-1,c);
 	for(int j=0;j<jMax;j++)tableTwo[n][j]=0;//j<��ǰ�����������ߵ�ǰ��Ʒ����ʱ��tableTwo[n][j]=0;
 	for(int j=w[n];j<=c;j++)tableTwo[n][j]=v[n];//��ǰ������������װ����ʱ�� tableTwo[n][j]=v[n];
	for(int i=n-1;i>1;i--){
		jMax=min(w[i],c);
		for(int j=0;j<=jMax;j++)tableTwo[i][j]=tableTwo[i+1][j];
		for(int j=w[i];j<=c;j++)tableTwo[i][j]=max(tableTwo[i+1][j],tableTwo[i+1][j-w[i]]+v[i]);//��ǰ��������װ���£�����Ҫ�ж����ֵ�Ƿ����ȷ������װ��װ
	}
	tableTwo[1][c]=tableTwo[2][c];//�ȼ���1��Ʒ��װ
	if(c>=w[1])tableTwo[1][c]=max(tableTwo[1][c],tableTwo[2][c-w[1]]+v[1]);//���ݼ�ֵ���жϵ���װ��װ
	return tableTwo[1][c];//��������ֵ
  }
 void Traceback(int w[],int c,int n){//��������ֵ�������Ž�
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
 	int weight[6]={0,2,2,6,5,4};//���λ����0����weight[1]��ʼ��ֵ
 	int value[6]={0,6,3,5,4,6};
 	int c=10;
 	cout<<"��һ�ַ���->�ܼ�ֵ���Ϊ��"<<Knapsack(value,weight,c,5)<<endl;
 	cout<<"�ڶ��ַ���->�ܼ�ֵ���Ϊ��"<<KnapsackTwo(value,weight,c,5)<<endl;
 	Traceback(weight,c,5);
 	cout<<"����ֵ�Ľ⣺";
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
