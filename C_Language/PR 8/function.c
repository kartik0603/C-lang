

#include <stdio.h>

void findCubes(int *ptr, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            *(ptr + i * c + j) = (*(ptr + i * c + j)) * (*(ptr + i * c + j)) * (*(ptr + i * c + j));
        }
    }
}

void printArray(int *ptr, int r, int c)
{
    printf("2D Array's Cube of Elements:\n");
    printf("\n");
    printf("\n");

    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", *(ptr + i * c + j));
        }
        printf("\n");
    }
}
