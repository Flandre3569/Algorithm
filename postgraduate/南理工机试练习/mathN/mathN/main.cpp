#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	// ��ƽ����
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	float avg = (a + b + c) / 3;
	printf_s("%0.3f\n", avg);

	// �����¶�תΪ�����¶�
	int f;
	scanf_s("%d", &f);
	float tem = 5.0 * (f - 32) / 9;
	printf("%0.3f\n", tem);

	// ������
	int n;
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	// ���Һ�����
	int si, ci;
	scanf_s("%d%d", &si, &ci);
	float s1 = sin(si);
	float s2 = cos(ci);
	printf("%f %f", s1, s2);

	//����
	int count;
	scanf_s("%d", &count);
	int dis = count * 95;
	if (count * 95 > 300) {
		dis = dis * 0.85;
	}
	printf("%d", dis);

	// �Ƿ񹹳�ֱ��������
	int len, wid, hei;
	scanf_s("%d%d%d", &len, &wid, &hei);
	if (len + wid > hei && len + hei > wid && hei + wid > len) {
		if (len * len + wid * wid == hei * hei || wid * wid + hei * hei == len * len || len * len + hei * hei == wid * wid) {
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	else {
		printf("not a triangle");
	}

	// �ж��Ƿ�������
	int year;
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("yes");
	}
	else printf("no");


	return 0;
}