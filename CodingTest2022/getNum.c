#include<stdio.h>
#include<time.h>

int main(void) {
	int num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a = srand(time(NULL))%10+1;
	int n = 0;

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		n++;
		if (num[i] == a) {
			break;
		}
	}
	printf("랜덤 수는 %d번 방에 값과 같습니다.", n);

	return 0;
}