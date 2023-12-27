#include <stdio.h>
#include "function.c"

int main()
{
    int n;
    // printf(" Enter Number\t:");
    n = getArrayLength();

    int arr[n];

    arrayInput(arr, n);
    arrayMax(arr, n);
}