// sort Array in Assending order

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Array Size:\t");
    scanf("%d", &n);

    int a[n], i, j;

    printf("Enter A's Array Elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("A's Elements\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Ascending Order of A's Array Elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
