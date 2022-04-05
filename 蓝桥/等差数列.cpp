#include<bits/stdc++.h>
using namespace std;
int Ai[100005];

int main(){
	int N;
	cin>>N;
	for(int i = 0; i < N; i++)
		cin>>Ai[i];
	sort(Ai, Ai + N);
	int min_d = Ai[1] - Ai[0]; //升序排的序，所以公差大于0
	if(min_d == 0) //如果 Ai[1] - Ai[0]等于0，说明这些数必定全部相等，那最小值就是N
		cout<<N<<endl;
	else{
		int gcd = min_d;
		for(int i = 2; i < N; i++){
			min_d = __gcd(min_d, Ai[i] - Ai[i - 1]);
		}
		cout<<(Ai[N - 1] - Ai[0]) / min_d + 1<<endl;
	}
	return 0;
}
