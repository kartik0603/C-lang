/* Q.3 Write a Program to find the transpose matrix of a given 2D array. */

#include <stdio.h>
int main()
{
    int row, column, large = 0;
    printf(" Enter ROW size \t:\n");
    scanf("%d", &row);

    printf(" Enter COLUMN Size \t:\n");
    scanf("%d", &column);

    int a[row][column], i, j;

    printf(" Enter Array Elements \t:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Array Elements \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf(" Transpose of Matrix \n");

    for (j = 0; j < column; j++)
    {
        for (i = 0; i < row; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}