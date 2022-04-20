#include<stdio.h>

int main(void) {
	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number의 값 : %d\n", number);

	pNumber = &number;
	*pNumber = *pNumber + 5;
	printf("number의 값 : &d, %d, %p", number, *pNumber, *pNumber);


}
