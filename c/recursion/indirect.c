/* C program to illustrate
indirect recursion */
#include <stdio.h>

void func2(int n);

void func1(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        func2(n - 1);
    }
}

void func2(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        func1(n / 2);
    }
}

/* Add a breakpoint and debug
to see how indirect recursion works */
int main()
{
    func1(30);

    return 0;
}