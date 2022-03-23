#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int arr[10];
    int i, sum = 0;
    double avg = 0;
    srand(time(NULL)); // srand(뭘 기반으로 뽑아낼지)를 사용해 랜덤값 추출

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

    printf("합계 : %d\n", sum);
    printf("평균 : %lf\n", avg);

}