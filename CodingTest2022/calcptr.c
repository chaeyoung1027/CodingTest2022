#include<stdio.h>

int main(void) {
	char* pc = (char*)100;//가능하지만 잘 이용하지 않는다.(pc의 주소값을 바꿔줌)
	int* pi = (int*)100;
	double* pd = (double*)100;
//	pd = 100;	//경고발생
	printf("%u %u %u", (int)(pc-1), (int)(pc),(int)(pc+1));	//%u는 부호가없는변수!
	printf("%u %u %u", (int)(pi-1), (int)(pi),(int)(pi+1));	
	printf("%u %u %u", (int)(pd-1), (int)(pd),(int)(pd+1));	
	//ctrl + alt를 사용해 한 번에 바꾸기


}d