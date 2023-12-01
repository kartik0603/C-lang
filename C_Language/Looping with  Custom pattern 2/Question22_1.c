
// *     *
// *     *
// *     *
// *     *
// *     *
//  *   *
//   * *
//    *

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (
                (j == 1 && (i >= 1 && i <= 6)) ||

                (j == 7 && (i >= 1 && i <= 6)) ||

                (i == 7 && (j == 2 || j == 6)) ||

                (i == 8 && (j == 3 || j == 5)) ||

                (i == 9 && j == 4)

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
