//  Program to find the minimum number from the given 3 numbers using the ternary operator.

#include <stdio.h>
int main()
{
    int a, b, c;

    printf(" Enter First Number \t : ");
    scanf("%d", &a);

    printf(" Enter Second Number \t : ");
    scanf("%d", &b);

    printf(" Enter Third Number \t : ");
    scanf("%d", &c);

    (a < b) ? (a < c) ? printf("%d is Minimum \n", a)
                      : printf(" %d is Minimum \n", c)
    : (b < c)
        ? printf(" %d is Minimum \n", b)
        : printf(" %d is Minimum \n ", c);
    return 0;
}