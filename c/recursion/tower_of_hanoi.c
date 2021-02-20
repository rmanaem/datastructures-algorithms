/* C program to illustrate 
recursion using tower of hanoi
problem https://en.wikipedia.org/wiki/Tower_of_Hanoi*/
#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char destination)
{
    if (n > 0)
    {
        hanoi(n - 1, source, destination, auxiliary);
        printf("Move disk %d from tower %c to tower %c\n", n, source, destination);
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