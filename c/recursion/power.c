/* C program to illustrate 
differences between recursion
and iteration using power */
#include <stdio.h>

int recursive_power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return recursive_power(n, p - 1) * n;
}

int recursive_power1(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    if (p % 2 == 0)
    {
        return recursive_power1(n * n, p / 2);
    }
    return n * recursive_power1(n * n, (p - 1) / 2);
}

int iterative_power(int n, int p)
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

    printf("%d\n", recursive_power(x, y));
    printf("%d\n", recursive_power1(x, y));
    printf("%d\n", iterative_power(x, y));

    return 0;
}