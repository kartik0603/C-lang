// A B C D E
//   B C D E
//     C D E
//       D E
//         E

#include <stdio.h>
int main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = 1; s < i; s++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}