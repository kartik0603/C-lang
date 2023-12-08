/* Q.2 Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same. */

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter ROW Size: ");
    scanf("%d", &row);

    printf("Enter COLUMN Size: ");
    scanf("%d", &column);

    int a[row][column], b[row][column], c[row][column];
    int i, j, sum = 0;
    float average;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter Element of Array A at position [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter Element of Array B at position [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("Matrix elements A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix elements B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }

    printf("Matrix elements c:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
