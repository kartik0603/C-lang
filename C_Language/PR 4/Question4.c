/*
Q.4 Write a Program to print the below pattern using nested for loop.
10101
 1010
  101
   10
    1
*/

#include <stdio.h>
int main()
{
    int i, j, s;

    for (i = 5; i >= 1; i--)
    {
        for (s = 5; s > i; s--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    return 0;
}