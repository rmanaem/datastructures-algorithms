/* C program to compute
sum of natural numbers 
using recursion and iteration */
#include <stdio.h>

int recursive_sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return recursive_sum(n - 1) + n;
}

int iterative_sum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
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
    int x = 20;

    printf("%d\n", recursive_sum(x));
    printf("%d\n", iterative_sum(x));

    return 0;
}