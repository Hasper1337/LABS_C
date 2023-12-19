#include <stdio.h>
#include <math.h>

double loga(double n)
{
    double h, sum, f, x;
    h = (float)2 / n;
    for (int i = 0; i < n; i++){
        x = (float)i * h + h / 2;
        if (x >= 0 && x <= 1){
            f = sqrt(x + 1) - sqrt(x) - 1/2;
            sum = sum + f;
        }
        
        else if (x > 1 && x <= 2){
            f = exp(-x - (1 / x ));
            sum = sum + f;
        }
    } 
    sum = sum * h;
    return (sum);
}


int main ()
{
    double sum = 0, n = 200, e, l1 = 0, l2 = 1;
    printf("Введите точность: ");
    scanf("%lf", &n);
    l1 = loga(n);
    l2 = loga(2 * n);
    while ((l2 -l1) / 3 > e){
        l2 = loga(2*n);
        n = 2 * n;
    } printf ("Значение интеграла -> %lf\n", l2);
    return 0;
}

