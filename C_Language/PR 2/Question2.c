// Q.2 Write a Program to check whether a number is even or odd using the ternary operator.

#include <stdio.h>
int main()
{
    int a;

    printf(" Enter any Number \t :");
    scanf(" %d", &a);

    (a % 2 == 0)
        ? printf("you have enter  EVEN Number \n")
        : printf(" You Have Enter A ODD Number \n");

    return 0;
}
