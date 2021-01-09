/* C++ program to illustrate
nested recursion */
#include <iostream>

int nested(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    return nested(nested(n + 11));
}

/* Add a breakpoint and debug
to see how nested recursion works */
int main()
{
    std::cout << nested(70);

    return 0;
}