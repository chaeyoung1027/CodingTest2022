#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int arr[10];
    int i, sum = 0;
    double avg = 0;
    srand(time(NULL)); // srand(�� ������� �̾Ƴ���)�� ����� ������ ����

    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        arr[i] = (rand() % 100) + 1;
    }
    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        sum = sum + arr[i];
    }
    avg = (double)sum / 10;

    printf("�հ� : %d\n", sum);
    printf("��� : %lf\n", avg);

}