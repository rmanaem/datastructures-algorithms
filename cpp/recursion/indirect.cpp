/* C++ program to illustrate
indirect recursion */
#include <iostream>

void func2(int n);

void func1(int n)
{
    if (n > 0)
    {
        std::cout << n << " ";
        func2(n - 1);
    }
}

void func2(int n)
{
    if (n > 0)
    {
        std::cout << n << " ";
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
