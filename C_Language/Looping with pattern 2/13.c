//         A
//       B A
//     C B A
//   D C B A
// E D C B A

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
        for (j = i; j >= 1; j--)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}