// Q.1 Write a Program to print the sum of all numbers from 1 to N using for loop.

#include <stdio.h>
int main()
{
    int i, sum, n;
    printf(" Enter Any Number \t : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
        printf("%d\t", sum);
    }
    return 0;
}