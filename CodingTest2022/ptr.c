#include<stdio.h>

int main(void) {
	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number�� �� : %d\n", number);

	pNumber = &number;
	*pNumber = *pNumber + 5;
	printf("number�� �� : &d, %d, %p", number, *pNumber, *pNumber);


}
