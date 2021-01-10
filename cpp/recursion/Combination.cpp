/* C++ program to illustrate 
recursion using combination
nCr and pascal's triangle */
#include <iostream>

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact(n - 1) * n;
}

int combination(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);
    return num / den;
}

int combination_pascal(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    return combination_pascal(n - 1, r - 1) + combination_pascal(n - 1, r);
}

int main()
{
    int x = 4, y = 3;

    std::cout << combination(x, y) << std::endl;
    std::cout << combination_pascal(x, y) << std::endl;

    return 0;
}