// *   *
//  * *
//   *
//   *
//   *
//   *

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (
                (i == 1 && (j == 1 || j == 5)) ||

                (i == 2 && (j == 2 || j == 4)) ||

                (j == 3 && (i >= 3 && i <= 6))

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