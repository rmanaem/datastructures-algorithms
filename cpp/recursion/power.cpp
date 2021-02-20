/* C++ program to illustrate 
differences between recursion
and iteration using power */
#include <iostream>

int recursivePower(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return recursivePower(n, p - 1) * n;
}

int recursivePower1(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    if (p % 2 == 0)
    {
        return recursivePower1(n * n, p / 2);
    }
    return n * recursivePower1(n * n, (p - 1) / 2);
}

int iterativePower(int n, int p)
{
    int power = 1;
    for (int i = 0; i < p; i++)
    {
        power *= n;
    }
    return power;
}

/* Add a breakpoint and debug
to compare recursion and iteration
In terms of time complexity both 
recursive and iterative functions 
have complexity O(n) however
in terms of space complexity, recursion 
has complexity O(n) while iteration
has complexity O(1) */
int main()
{
    int x = 2;
    int y = 11;

    std::cout << recursivePower(x, y) << std::endl;
    std::cout << recursivePower1(x, y) << std::endl;
    std::cout << iterativePower(x, y) << std::endl;

    return 0;
}
