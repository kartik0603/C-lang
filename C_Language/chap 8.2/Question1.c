/* Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different */
#include <stdio.h>
int main()

{
    int n;

    printf(" Enter Array size\t:\n");
    scanf("%d", &n);
    int a[n], b[n], i, c[n * 2];

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
        c[i] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        c[i + n] = b[i];
    }

    printf("  Array C is \t: \n");
    for (i = 0; i < n * 2; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
    }

    return 0;
}