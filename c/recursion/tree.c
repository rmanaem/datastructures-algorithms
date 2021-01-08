/* C program to illustrate
tree recursion */
#include <stdio.h>

void tree(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        tree(n - 1);
        tree(n - 1);
    }
}

/* Add a breakpoint and debug
to see how tree recursion works */
int main()
{
    tree(5);

    return 0;
}
