/* C++ program to illustrate 
recursion, recursion with 
memorization and iteration
using fibonacci series */
#include <iostream>

int recursive_fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recursive_fib(n - 2) + recursive_fib(n - 1);
}

int f[10];
int memorization_fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (f[n - 2] == 0)
    {
        f[n - 2] == memorization_fib(n - 2);
    }
    if (f[n - 1] == 0)
    {
        f[n - 1] = memorization_fib(n - 1);
    }
    f[n] = f[n - 2] + f[n - 1];
    return f[n];
}

int iterative_fib(int n)
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

    std::cout << recursive_fib(x) << std::endl;
    std::cout << memorization_fib(x) << std::endl;
    std::cout << iterative_fib(x) << std::endl;

    return 0;
}