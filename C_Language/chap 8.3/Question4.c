/* Q.4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array. */

#include <stdio.h>

int main()
{
    // int row, column;

    // printf("Enter ROW Size: ");
    // scanf("%d", &row);

    // printf("Enter COLUMN Size: ");
    // scanf("%d", &column);

    int a[5][5];
    int i, j, sum = 0;
    float average;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter Element at position [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix elements:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (

                ((i == 0) && (j >= 0 && j <= 4)) ||

                ((i == 4) && (j >= 0 && j <= 4)) ||

                ((j == 0) && (i >= 0 && i <= 4)) ||

                ((j == 4) && (i >= 0 && i <= 4))

            )

            {
                printf("%d ", a[i][j]);
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (

                ((i == 0) && (j >= 0 && j <= 4)) ||

                ((i == 4) && (j >= 0 && j <= 4)) ||

                ((j == 0) && (i >= 0 && i <= 4)) ||

                ((j == 4) && (i >= 0 && i <= 4))

            )

            {
                sum += a[i][j];
            }
        }
    }
    printf("The sum of boundary elements of an Array \t:%d ", sum);
    return 0;
}
