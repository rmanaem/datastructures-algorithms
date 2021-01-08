#include <stdio.h>

void tail(int n)
{
    if (n > 0)
    {
        tail(n - 1);
        printf("%d ", n);
    }
}

void head(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        head(n - 1);
    }
}

/* Add a breakpoint and debug
to see how tail and head
recursions work*/
int main()
{
    int x = 7;

    tail(x);
    head(x);

    return 0;
}