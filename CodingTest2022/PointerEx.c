#include<stdio.h>

int main(void) {
	int number = 100;
	printf("number�ּ� : %p �� :%d\n", &number, number );

	int n = 5; //n�̶�� �̸��� ���� ������ ����, ���� 5�� ����
	printf("n�� �� : %d\n", n);
	int* ptr = &n;//ptr n�� �ּҸ� ����Ű�� �����ͷ� ����
	printf("n�� �� : %d\n", *ptr);
	*ptr = 10;//ptr�� ����Ű�� n���ٰ� 10�� �־��
	//*�� �����ϸ� ptr�� 
	//��, n�� �� 5�� 10���� ��ü
	printf("n�� �� : %d\n", n);


	return 0;
}