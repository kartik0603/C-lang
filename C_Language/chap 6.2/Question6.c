//  Write a Program to print 1 to N using a For Loop
#include <stdio.h>
int main()
{
    int i, n;

    printf(" Enter Any Number \t : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}