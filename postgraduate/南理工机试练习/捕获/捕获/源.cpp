#include<iostream>
#include<cmath>
using namespace std;

typedef struct Deny {
	int x;
	int y;
} D;

int main()
{
	// N�����ˣ�A->�������ֵ B->�������ֵ
	int N, A, B;
	cin >> N >> A >> B;
	int x, y, count = 0;
	
	// �½�һ���������飬Ȼ��洢ÿһ�����˵�λ��
	Deny d[501];
	while (count < N) {
		cin >> x >> y;
		d[count].x = x;
		d[count].y = y;
		count++;
	}
	// ����һ����¼���ֵ
	int max = 0;
	int finalMax = 0;

	int record[501][501];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			record[i][j] = 0;
		}
	};


	// ��ʼ��������Ȼ����֤�Ƿ���ϲ�ֵA�Ͳ�ֵB��������ϣ���ômax+1
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i != j && abs(d[i].x - d[j].x) <= A && abs(d[i].y - d[j].y) <= B) {
				max++;
				for (int m = 0; m < N; m++) {
					if (record[m][j] == 0 || record[j][m] == 0) {
						max--;
						break;
					};
				}
			
			};
		}
		
		if (max > finalMax) finalMax = max;
		max = 0;
	}

	cout << finalMax << endl;

	return 0;
}