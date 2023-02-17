#include<stdio.h>

int main()
{
	// 数字ABC 如果ABC == A³ + B³ + C³，那么就是水仙花数。
	for (int i = 100; i <= 999; i++) {
		int x = i / 100;
		int y = (i / 10) % 10;
		int z = (i % 100) % 10;
		if (i == x * x * x + y * y * y + z * z * z) printf("%d\n", i);
	}

	return 0;
}