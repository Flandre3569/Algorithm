# include <iostream>
using namespace std;
# include <iomanip>
# include <cmath>

int main() {
	int a;
	double max,min,sum=0,cha=0,aver;
	int dress1=0, dress2=0;
	double arr[302];
	double chaji[302];
	cin >> a;
	for (int i = 0; i < a; ++i) {
		cin >> arr[i];
	}
	max = arr[0];
	min = arr[0];
	for (int i=0; i < a; ++i) {
		if (max < arr[i]) {
			max = arr[i];
			dress1 = i;
		}
	}
	for (int i = 0; i < a; ++i) {
		if (min>arr[i]) {
			min = arr[i];
			dress2 = i;
		}
	}
	for (int i = 0; i < a; ++i) {
		sum = sum + arr[i];
	}

	aver = (double)(sum-max-min) / ((double)a - 2) * 1.0;

	for (int i = 0; i < a; ++i) {
		if (i != dress1 && i != dress2) {
			chaji[i] = abs(arr[i] - aver);
			if (cha < chaji[i]) {
				cha = chaji[i];
			}
		}
	}


	cout <<fixed<<setprecision(2)<< aver<< " " << cha;

}