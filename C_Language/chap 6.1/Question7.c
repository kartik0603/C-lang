// Q.7 Write a Program to print EVEN numbers from 1 to N using a while loop.

#include <stdio.h>
int main()
{
    int n, a = 1;
    printf(" Enter Any Number \t : ");
    scanf("%d", &n);
    while (a <= n)
    {
        if (a % 2 == 0)
        {
            printf("EVEN NUMBER   = %d \n", a);
        }
        a++;
    }
    return 0;
}
