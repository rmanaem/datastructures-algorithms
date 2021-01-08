/* C program to illustrate
static and global variables
in recursion */
#include <stdio.h>

int static_var(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return static_var(n - 1) + x;
    }
    return 0;
}

int y = 0;
int global_var(int n)
{
    static int x = 0;
    if (n > 0)
    {
        y++;
        return global_var(n - 1) + y;
    }
    return 0;
}

/* Add a breakpoint and debug
to see how static and global
variables work in recursion */
int main()
{
    int i = 7;

    printf("%d\n", static_var(i));
    printf("%d\n", static_var(i));
    printf("%d\n", global_var(i));
    printf("%d\n", global_var(i));

    return 0;
}