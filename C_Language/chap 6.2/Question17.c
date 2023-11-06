// // To Check Number is Prime Number Or Not 1to N using for loop

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Prime numbers start from 2 and greater.\n");
        return 0;
    }

    printf("Prime numbers up to %d are: ", n);

    for (i = 2; i <= n; i++)
    {
        int prime = 1;

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}
