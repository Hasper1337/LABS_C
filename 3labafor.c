#include <stdio.h>
#include <math.h>

int main() {
    float x, h;
    printf("Enter h -> ");
    scanf("%f", &h);
    printf("    x                   f(x)\n");
    printf("---------------------------------\n");
   
    for(x = 0;0 <= x && x <= 1; x += h)
    {
        double y = (sqrt(x + 1) - sqrt(x) - 1/2);
        printf("%f\t        %lf\n",x, y);
    }
    for(x; 1 < x && x <= 2;x += h)
    {
        double z = exp(-x - 1/x);
        printf("%f\t        %lf\n",x, z);
    }
}
