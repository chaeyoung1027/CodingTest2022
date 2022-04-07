#include<stdio.h>

int main(void) {
	int number = 100;
	printf("number주소 : %p 값 :%d\n", &number, number );

	int n = 5; //n이라는 이름을 가진 변수를 선언, 값을 5로 저장
	printf("n의 값 : %d\n", n);
	int* ptr = &n;//ptr n의 주소를 가리키는 포인터로 선언
	printf("n의 값 : %d\n", *ptr);
	*ptr = 10;//ptr이 가르키는 n에다가 10을 넣어라
	//*을 제거하면 ptr의 
	//즉, n의 값 5를 10으로 교체
	printf("n의 값 : %d\n", n);


	return 0;
}