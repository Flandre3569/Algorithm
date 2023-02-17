#include<stdio.h>
#include<time.h>
#include<iostream>
using namespace std;

int main()
{
	const int MOD = 1000000;
	int n, S = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		int factorial = 1;
		for (int j = 1; j <= i; j++) {
			factorial = (factorial * j % MOD);
		}
		S = (S + factorial) % MOD;
	}
	printf("%d\n", S);
	printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}