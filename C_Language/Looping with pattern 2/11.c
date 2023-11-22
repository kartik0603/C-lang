// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include <stdio.h>
int main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--)
    {
        for (s = 5; s > i; s--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}