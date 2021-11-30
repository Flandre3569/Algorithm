# include <iostream>
using namespace std;


void hannuota(int n, char A, char B, char C)
{
	
	if (n == 1)
	{
		cout  <<A << "->"<<n <<"->"<< B << endl;
	}
	else
	{
		hannuota(n - 1, A, C, B);
		cout  << A << "->"<<n <<"->"<< B << endl;
		hannuota(n - 1, C, B, A);
	}
}

int main()
{
	char ch1 ;
	char ch2 ;
	char ch3 ;
	int n;
	cin >> n;
	cin >> ch1 >> ch2 >> ch3;
	hannuota(n, ch1, ch2, ch3);
	return 0;
}