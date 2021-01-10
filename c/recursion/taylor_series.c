/* C program to illustrate 
recursion using taylor series
for e^(x) and horner's rule */
#include <stdio.h>

double taylor(int x, int n)
{
    static double p = 1, f = 1;
    double t;

    if (n == 0)
    {
        return 1;
    }
    t = taylor(x, n - 1);
    p *= x;
    f *= n;
    return t + p / f;
}

double taylor_horner(int x, int n)
{
    static double t;

    if (n == 0)
    {
        return t;
    }
    t = 1 + x * t / n;
    return taylor_horner(x, n - 1);
}

int main()
{
    int x = 2;
    int o = 10;

    printf("%lf\n", taylor(x, o));
    printf("%lf\n", taylor_horner(x, o));

    return 0;
}