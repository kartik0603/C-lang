//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include <stdio.h>
int main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = 5; s > i; s--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}