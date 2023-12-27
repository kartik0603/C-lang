/* Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.*/

#include <stdio.h>
#include "function.c"

int main()
{
    int n, i;

    n = getArrayLength();

    int a[n];

    int *ptr = a;

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("\n Array Elements \n a[%d] = %d\n", i, *(ptr + i));
    }

    printf("Square of Array Elements: ");
    for (i = 0; i < n; i++)
    {
        int square = a[i] * a[i];
        printf("\n a[%d]=%d ", i, square);
    }
    printf("\n");

    return 0;
}