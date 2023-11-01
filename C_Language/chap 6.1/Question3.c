// Q.3 Write a Program to print 1 to N using a while loop

#include <stdio.h>
int main()
{
    int a = 1, n;

    printf("Enter Any Number \t : ");
    scanf("%d", &n);

    while (a <= n)
    {
        printf("%d \n", a++);
    }
    return 0;
}