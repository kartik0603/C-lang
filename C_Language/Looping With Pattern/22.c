#include <stdio.h>
int main()
{
    int i, j, k = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", k++);
        }
        printf("\n");
    }
    return 0;
}