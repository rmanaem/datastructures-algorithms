/* C++ program to illustrate
tree recursion */
#include <iostream>

void tree(int n)
{
    std::cout << " " << n;
    tree(n - 1);
    tree(n - 1);
}

/* Add a breakpoint and debug
to see how tree recursion works */
int main()
{
    tree(5);

    return 0;
}