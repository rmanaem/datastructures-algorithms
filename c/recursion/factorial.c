/* C program to illustrate 
differences between recursion
and iteration using factorial */
#include <stdio.h>

int recursive_fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return recursive_fact(n - 1) * n;
}

int iterative_fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    return factorial;
}

/* Add a breakpoint and debug
to compare recursion and iteration
In terms of time complexity both 
functions have complexity O(n) however
in terms of space complexity, recursion 
has complexity O(n) while iteration
has complexity O(1) */
int main()
{
    int x = 7;

    printf("%d\n", recursive_fact(x));
    printf("%d\n", iterative_fact(x));

    return 0;
}