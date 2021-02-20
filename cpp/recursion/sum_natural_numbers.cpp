/* C++ program to illustrate 
differences between recursion
and iteration using sum of 
natural numbers */
#include <iostream>

int recursiveSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return recursiveSum(n - 1) + n;
}

int iterativeSum(int n)
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

    printf("%d\n", recursiveSum(x));
    printf("%d\n", iterativeSum(x));

    return 0;
}