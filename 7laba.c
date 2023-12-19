#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[n][m]){ //заполнение массива
    int i, j;
    srand(time(NULL));
    printf("Матрица: \n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("%4d", a[i][j] = rand () % 101-50);
        }
        printf("\n");
    }
}

int max_str1(int n, int m, int a[n][m]){ //макс. сумма строчки
    int max, sum, max_str;
    for (int i = 0; i < n; i++){
        sum = 0;
        for (int j = 0; j < m; j++){
            sum += a[i][j];
        }
        if (max < sum){
            max = sum;
            max_str = i+1;
    }
}
    printf("Максимальная сумма строки -> %d\n", max);
    return max_str;
}

int min_str2(int n, int m, int a[n][m]){ //мин. сумма строчки
    int max, min, min_str, sum;
    for (int i = 0; i < n; i++){
        sum = 0;
        for (int j = 0; j < m; j++){
            sum += a[i][j];
        }
        if (min > sum){
            min = sum;
            min_str = i + 1;
    }
    }
    printf("Минимальная сумма строки -> %d\n", min);
    return min_str;
}

int max_slb1(int n, int m, int a[n][m]){ //макс. сумма столбца
    int max, max_slb, sum;
    for (int j = 0; j < m; j++){
    sum = 0;
        for (int i = 0; i < n; i++){
            sum += a[i][j];
        }
        if (max < sum){
            max = sum;
            max_slb = j+1;
    }
}
    printf("Максимальная сумма столбца -> %d\n", max);
    return max_slb;
}

int min_slb2(int n, int m, int a[n][m]){ //мин. сумма столбца
    int max, min, min_slb, sum;
    for (int j = 0; j < m; j++){
        sum = 0;
        for (int i = 0; i < n; i++){
            sum += a[i][j];
        }
        if (min > sum){
            min = sum;
            min_slb = j+1;
    }
}
    printf("Минимальная сумма столбца -> %d\n", min);
    return min_slb;
}

int main (){
    int n, m;
    printf("Количество строчек n -> ");
    scanf("%d", &n);
    printf("Количество столбцов m -> ");
    scanf("%d", &m);
    int a[n][m];
    fill(n, m, a);
    printf("Макс. сумма № строки -> %d\nМин. сумма № строки -> %d\nМакс. сумма № столбца -> %d\nМин.сумма № столбца -> %d\n", max_str1(n, m, a), min_str2(n, m, a), max_slb1(n, m, a), min_slb2(n,m,a));
    return 0;
}
 

