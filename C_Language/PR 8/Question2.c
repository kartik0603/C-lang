/*
Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.*/

#include <stdio.h>
#include "function.c"

int main()
{
    int r, c;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("\n");

    int a[r][c];

    printf("Enter the elements of the 2D array:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Array's Elements:");
    printf("\n");
    printf("\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    findCubes(&a[0][0], r, c);

    printArray(&a[0][0], r, c);

    return 0;
}
