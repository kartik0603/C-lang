// *             *
// *             *
// *             *
// *             *
// *             *
//  *     *     *
//   *   * *   *
//    * *   * *
//     *     *

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 15; j++)
        {
            if (
                (j == 1 && (i >= 1 && i <= 5)) ||

                (j == 15 && (i >= 1 && i <= 5)) ||

                (i == 6 && (j == 2 || j == 8 || j == 14)) ||

                (i == 7 && (j == 3 || j == 7 || j == 9 || j == 13)) ||

                (i == 8 && (j == 4 || j == 6 || j == 10 || j == 12)) ||

                (i == 9 && (j == 5 || j == 11))

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