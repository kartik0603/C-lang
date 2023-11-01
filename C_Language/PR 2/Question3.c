// Q.3 Write C program to find out max from 4 numbers using nested if and drow flowchart.

#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf(" Enter First Number \t : \n");
    scanf("%d", &a);

    printf(" Enter  Second Number \t : \n");
    scanf("%d", &b);

    printf(" Enter Third Number \t : \n");
    scanf("%d", &c);

    printf(" Enter Fourth Number \t : \n");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            printf(" %d is Maximum \n ", a);
        }
        else
        {
            printf(" %d is Miximum \n ", c);
        }
    }
    else
    {
        if (b > d)
        {
            printf(" %d is Maximum \n ", b);
        }
        else
        {
            printf(" %d is Maximum \n ", d);
        }
    }
    return 0;
}