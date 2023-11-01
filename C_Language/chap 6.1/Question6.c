// Q.6 Write a Program to print odd numbers from 1 to N using a while loop.

#include <stdio.h>
int main()
{
    int n, a = 1;
    printf(" Enter Any Number \t : ");
    scanf("%d", &n);
    while (a <= n)
    {
        if (a % 2 == 1)
        {
            printf("ODD NUMBER   = %d \n", a);
        }
        a++;
    }
    return 0;
}
