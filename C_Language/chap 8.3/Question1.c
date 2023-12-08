/* Q.1 Write a Program to find the average of a given 2D array. */

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter ROW Size: ");
    scanf("%d", &row);

    printf("Enter COLUMN Size: ");
    scanf("%d", &column);

    int a[row][column];
    int i, j, sum = 0;
    float average;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter Element at position [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum += a[i][j];
        }
    }

    average = (float)sum / (row * column);

    printf("Average: %.2f\n", average);

    return 0;
}
