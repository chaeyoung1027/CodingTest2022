#include<stdio.h>

int main(void) {
	char* pc = (char*)100;//���������� �� �̿����� �ʴ´�.(pc�� �ּҰ��� �ٲ���)
	int* pi = (int*)100;
	double* pd = (double*)100;
//	pd = 100;	//���߻�
	printf("%u %u %u", (int)(pc-1), (int)(pc),(int)(pc+1));	//%u�� ��ȣ�����º���!
	printf("%u %u %u", (int)(pi-1), (int)(pi),(int)(pi+1));	
	printf("%u %u %u", (int)(pd-1), (int)(pd),(int)(pd+1));	
	//ctrl + alt�� ����� �� ���� �ٲٱ�


}d