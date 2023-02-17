#include<stdio.h>

int main()
{
	int a, b, c;
	int res = 0;
	while (scanf_s("%d %d %d", &a, &b, &c) == 3) {
		for (int i = 10; i <= 100; i++) {
			if (i % 3 == a && i % 5 == b && i % 7 == c) {
				res = i;
			}
		}
	}
	if (res == 0) printf("No Answer");
	else printf("%d", res);

	return 0;
}