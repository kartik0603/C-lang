/*
Q.6 Write a Program to print the below pattern using nested for loop.
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1
*/

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
    return 0;
}