/*
Q.1 Write a Program to print the below pattern using nested for loop.
11
22 33
44 55 66
77 88 99 110
121 132 143 154 165
*/

#include <stdio.h>
int main()
{
    int i, j, k = 11;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k += 11;
        }
        printf("\n");
    }
    return 0;
}
