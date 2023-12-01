/*
Q.7 Write a Program to print the below pattern using nested for loop.
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include <stdio.h>
int main()
{
    int i, j, s;

    for (i = 5; i >= 1; i--)
    {
        for (s = 1; s < i; s++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("*");
        }
        for (j = 4; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i <= 5; i++)
    {
        for (s = 1; s < i; s++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("*");
        }
        for (j = 4; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
