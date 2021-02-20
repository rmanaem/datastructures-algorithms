/* C++ program to illustrate
static and global variables
in recursion */
#include <iostream>

int staticVar(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return staticVar(n - 1) + x;
    }
    return 0;
}

int y = 0;
int globalVar(int n)
{
    static int x = 0;
    if (n > 0)
    {
        y++;
        return globalVar(n - 1) + y;
    }
    return 0;
}

/* Add a breakpoint and debug
to see how static and global
variables work in recursion */
int main()
{
    int i = 7;

    std::cout << staticVar(i) << std::endl;
    std::cout << staticVar(i) << std::endl;
    std::cout << globalVar(i) << std::endl;
    std::cout << globalVar(i) << std::endl;

    return 0;
}