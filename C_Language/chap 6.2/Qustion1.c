// Q.1 Write a Program to print 1 to 10 using a do-while loop.

#include <stdio.h>
int main()
{
    int n = 1;
    do
    {
        printf("%d\n", n++);

    } while (n <= 10);

    return 0;
}