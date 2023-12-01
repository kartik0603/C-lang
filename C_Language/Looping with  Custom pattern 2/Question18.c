// *****
// *    *
// *    *
// *****
// *   *
// *    *
// *     *

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (
                (i == 1 && (j >= 1 && j <= 5)) ||

                (i == 4 && (j >= 1 && j <= 5)) ||

                (j == 1 && (i >= 1 && i <= 8)) ||

                (j == 6 && (i >= 2 && i <= 3)) ||

                (i >= 5 && (i == j))

            )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}