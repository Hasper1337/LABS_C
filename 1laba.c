#include <stdio.h>

int main(void) {
    int a1, a2, a3, min, max, MaxInd = 1, MinInd = 1;
    printf("Введите значения а1:\n");
    scanf("%d", &a1);
    printf("Введите значения а2:\n");
    scanf("%d", &a2);
    printf("Введите значения а3:\n");
    scanf("%d", &a3);
    max = min = a1;
    if (a2 < min){
        min = a2;
        MinInd = 2;
    }
    else{
        max = a2;
        MaxInd = 2;
    }
    if (a3 < min){
        min = a3;
        MinInd = 3;
    }
    else if (a3 > max){
        max = a3;
        MaxInd = 3;
    }
    if (max % 2 == 0)
        printf("Номер максимального элемента: %d\nДоля в процентах: %.2f\n", MaxInd, ((float)max / (a1 + a2+ a3)) * 100);
    else printf("Номер наиб. пар. -> %d\nНомер наим. пар. -> %d\nИх разность -> %d\n", MaxInd, MinInd, max - min);
    return 0;
}
