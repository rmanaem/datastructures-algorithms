/* C++ program to illustrate 
recursion using taylor series
for e^(x) and horner's rule */
#include <iostream>

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

double taylorHorner(int x, int n)
{
    static double t;

    if (n == 0)
    {
        return t;
    }
    t = 1 + x * t / n;
    return taylorHorner(x, n - 1);
}

int main()
{
    int x = 2;
    int o = 10;

    std::cout << taylor(x, o) << std::endl;
    std::cout << taylorHorner(x, o) << std::endl;

    return 0;
}