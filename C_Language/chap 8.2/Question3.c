/* Q.3 Write a Program to find square of each element from the given array */
#include <stdio.h>
int main()

{
    int n;

    printf(" Enter Array size\t:\n");
    scanf("%d", &n);
    int a[n], i;

    printf(" Enter Array Elements\t:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array Elements\t:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    printf("Square of  Array elements\t:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i] * a[i]);
    }
    return 0;
}