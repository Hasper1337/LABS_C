#include <stdio.h>
#include <math.h>

int main() {
    float x, h;
    printf("Enter h -> ");
    scanf("%f", &h);
    printf("    x                   f(x)\n");
    printf("---------------------------------\n");
   
    do{
        double y = (sqrt(x + 1) - sqrt(x) - 1/2);
        printf("%f\t        %lf\n", x, y);
        x = x + h;
    }while(0 <= x && x <= 1);
   
    do{
        double z = exp(-x - 1/x);
        printf("%f\t        %lf\n", x, z);
        x = x + h;
    }while(1 < x && x <= 2);
}

