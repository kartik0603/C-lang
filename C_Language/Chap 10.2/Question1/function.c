#include <stdio.h>

int getInt()
{
    int n;
    scanf("%d", &n);
    return n;
}

int getArrayLength()
{
    int n;
    printf(" Enter Array Length\t:");
    scanf("%d", &n);
    return n;
}

void arryInput(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" Enter Array Elements a[%d] = ", i);
        a[i] = getInt();
    }
}

void arraySum(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("Sum of Array Elements is %d", sum);
}