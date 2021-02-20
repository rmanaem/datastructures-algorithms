/* C++ program to illustrate 
recursion using tower of hanoi
problem https://en.wikipedia.org/wiki/Tower_of_Hanoi*/
#include <iostream>

void hanoi(int n, char source, char auxiliary, char destination)
{
    if (n > 0)
    {
        hanoi(n - 1, source, destination, auxiliary);
        std::cout << "Move disk " << n << " from tower " << source << " to tower " << destination << std::endl;
        hanoi(n - 1, auxiliary, source, destination);
    }
}

/* Add a breakpoint and debug
to see how tower of hanoi 
problem is resolved using 
recursion */
int main()
{
    hanoi(3, 'A', 'B', 'C');

    return 0;
}