#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    long double x;
    int sgn;
    printf("Enter x { x < 0 } -> ");
    scanf("%Lf", &x);
   
    if (x < 0)
    {
        double y = acos(pow(2, x)) + (1 / tan(M_PI * x));
        sgn = (y > 0) - (y < 0);
        printf("y(x) = %f\nz(y) = %d\n", y, sgn);

       
    }
    else{
        printf("x value is incorrect!\n");
    }
    return 0;
}
