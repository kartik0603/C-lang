// A B C D E
//   A B C D
//     A B C
//       A B
//         A

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
        for (j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}