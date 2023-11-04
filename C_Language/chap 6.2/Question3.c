// Q.3 Write a Program to print even numbers from 1 to N using a do-while loop.

#include <stdio.h>
int main()
{
    int a = 2;
    int n;
    printf(" Enter Any Number \t :");
    scanf("%d", &n);
    do
    {
        printf("%d ", a);
        a += 2;

    } while (a <= n);

    return 0;
}