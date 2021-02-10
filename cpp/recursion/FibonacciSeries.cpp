/* C++ program to illustrate 
recursion, recursion with 
memorization and iteration
using fibonacci series */
#include <iostream>

int recursiveFib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recursiveFib(n - 2) + recursiveFib(n - 1);
}

int f[10];
int memorizationFib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (f[n - 2] == 0)
    {
        f[n - 2] == memorizationFib(n - 2);
    }
    if (f[n - 1] == 0)
    {
        f[n - 1] = memorizationFib(n - 1);
    }
    f[n] = f[n - 2] + f[n - 1];
    return f[n];
}

int iterativeFib(int n)
{
    int t0 = 0, t1 = 1, f = 0;

    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        f = t0 + t1;
        t0 = t1;
        t1 = f;
    }
    return f;
}

/* Add a breakpoint and debug
to see how each function 
operates */
int main()
{
    int x = 7;

    std::cout << recursiveFib(x) << std::endl;
    std::cout << memorizationFib(x) << std::endl;
    std::cout << iterativeFib(x) << std::endl;

    return 0;
}