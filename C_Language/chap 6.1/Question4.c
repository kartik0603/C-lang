

#include <stdio.h>

int main()
{
    int n;

    printf("Enter Any Number: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        printf("%d  ", n);
        n -= 2;
    }

    printf("\n");

    return 0;
}
