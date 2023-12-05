/* Q.2 Write a Program to find the average of a 1D array.*/

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

    float sum = 0, average;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }

    average = sum / n;
    printf(" The Average of an Array\t: %.2f", average);

    return 0;
}
