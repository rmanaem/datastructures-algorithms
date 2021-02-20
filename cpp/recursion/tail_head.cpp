/* C++ program to illustrate
tail and head recursion */
#include <iostream>

void tail(int n)
{
    if (n > 0)
    {
        std::cout << n << " ";
        tail(n - 1);
    }
}

void head(int n)
{
    if (n > 0)
    {
        head(n - 1);
        std::cout << n << " ";
    }
}

/* Add a breakpoint and debug
to see how tail and head
recursion work */
int main()
{
    int x = 7;

    tail(x);
    head(x);

    return 0;
}