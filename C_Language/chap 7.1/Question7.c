/*
Q.7 Write a Program to print the below pattern using nested for loop.
A
B A
C B A
D C B A
E D C B A
*/

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}