#include<stdio.h>

int main(void) {
	int a[10] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int min = a[0];
	int num = 0;

	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
		if (a[i] < min) {
			min = a[i];
			num = i;
		}
	}
	printf("최소값의 위치는 %d번 방 입니다.", (num+1));

	return 0;
}