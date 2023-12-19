#include <stdio.h>
#include <math.h>

double f(int n) {
    double h, x, intgr = 0;
    double a = -1;
    double b = 2;
    h = (b - a) / n;
    for (x = a ; x <= 2; x += h){
        double func;
        if (0 <= x && x <= 1){
            func = cos(x)*exp(pow(-x,2));
            intgr += func;
        }
        else if (1 < x && x <= 2){
            func = log(x+1)-sqrt(4-x*x);
            intgr += func;
        }
    intgr *= h;
    return intgr;
}
}

int main(){
    double e;
    printf("Введите точность: ");
    scanf("%lf", &e);
    int n = 100;
    double intgr1 = f(n);
    double intgr2 = f(n * 2);
    while ((fabs(intgr2 - intgr1) / 3) > e){
            n *= 2;
            intgr2 = f(n * 2);
    }
    printf("Значение интегралла -> %lf\n", intgr2);
    return 0;
}
