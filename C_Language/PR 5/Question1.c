/* Q.1 Write a Program to find all the negative elements from a given 1D array. */

#include <stdio.h>
int main()
{
    int n;

    printf(" Enter Array size \t:");
    scanf("%d", &n);

    int a[n], i;

    printf(" Enter Array Element \t:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array \n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf(" Negative Element of Array \n");

    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }
    }
    return 0;
}
