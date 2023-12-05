/* Q.3 Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.*/

#include <stdio.h>
int main()

{
    int n;

    printf(" Enter Array size\t:\n");
    scanf("%d", &n);
    int a[n], b[n], i, c[n];

    printf(" Enter  A's Array  Elements\t:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf(" Enter  B's Array  Elements\t:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    printf(" A's Array Elements\t:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf(" B's Array Elements\t:\n");
    for (i = 0; i < n; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }

    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("  Array C[%d] is \t: c[%d]\n", i, c[i]);
    }

    return 0;
}
