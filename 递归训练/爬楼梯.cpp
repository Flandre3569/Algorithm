# include<iostream>
using namespace std;

int climb(int a) {
	if (a == 1) {
		return 1;
	}
	else if(a==2){
		return 2;
	}
	else {
		return climb(a - 1) + climb(a - 2);
	}
}
int main(){

	int a;
	
	while (cin >> a) {
		cout << climb(a) << endl;
	}
	return 0;
}