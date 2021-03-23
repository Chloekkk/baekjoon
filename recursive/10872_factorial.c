#include <stdio.h>

int factorial(int num)
{
    int res, i;

    i = -1;
    res = 1;
    while (++i < num)
    {
        res *= num - i;
    }
    return res;
}

int main(void)
{
    int num;

    scanf("%d", &num);
    printf("%d", factorial(num));
}