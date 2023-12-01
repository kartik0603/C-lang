// *  *
// *  *
// *  *
// ****
// *  *
// *  *
// *  *

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (

                (i == 4 && (j >= 1 && j <= 4)) ||

                (j == 1 && (i >= 1 && i <= 7)) ||

                (j == 4 && (i >= 1 && i <= 7))

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