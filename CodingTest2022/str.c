#include<string.h>    //strcmp
#include<stdio.h>

int main(void) {
	char s1[7][10] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��", "����"};
	char key[10] = { "����" };	//�˻��� �ܾ�

	for (int i = 0; i < 7; i++) {
		if (strcmp(s1[i], key) == 0)
		{
			printf("ã�°�(����)�� %d��°�� �ֽ��ϴ�.\n", i+1);
		}
	}
	
	return 0;
}