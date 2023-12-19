#include <stdio.h>

long unsigned int fr(long unsigned int n)
{
    if (n < 10) return 1;
    return 1 + fr(n / 10);
}

long unsigned int fl(long unsigned int n)
{
    unsigned int res;
    res = (n == 0);
    while(n > 0)
    {
        n /= 10;
        res += 1;
    }
    return res;
}

int main()
{
    long unsigned int n;
    printf("Количество цифр числа n\nn -> ");
    scanf("%lu", &n);
    printf("Цикл: %lu\nРекурсия: %lu\n", fl(n), fr(n));
    return 0;
}
