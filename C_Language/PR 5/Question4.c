/*
Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array. */

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter ROW size:\n");
    scanf("%d", &row);

    printf("Enter COLUMN Size:\n");
    scanf("%d", &column);

    int a[row][column], i, j;

    printf("Enter Array Elements:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Array Elements\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int r, c, sum = 0;

    printf("Enter Row number:\n");
    scanf("%d", &r);

    printf("Enter Column number:\n");
    scanf("%d", &c);

    printf("Sum of Row %d:\n", r);
    for (j = 0; j < column; j++)
    {
        sum += a[r][j];
    }
    printf("%d\n", sum);

    sum = 0;

    printf("Sum of Column %d:\n", c);
    for (i = 0; i < row; i++)
    {
        sum += a[i][c];
    }
    printf("%d\n", sum);

    return 0;
}
