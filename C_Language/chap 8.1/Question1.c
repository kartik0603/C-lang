/* Q.1 Write a Program to find the length of a 1D array. */

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
        printf("%d\n", a[i]);
    }

    int length = sizeof(a) / sizeof(a[0]);
    printf(" The Length of Array is : %d\n", length);

    return 0;
}
