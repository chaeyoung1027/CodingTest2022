#include<stdio.h>

int main(void) {
	int a[10] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int max = 0;
	int num = 0;

	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
		if (a[i] > max) {
			max = a[i];
			num = i;
		}
	}
	printf("�ִ밪�� ��ġ�� %d�� �� �Դϴ�.", (num+1));

	return 0;
}