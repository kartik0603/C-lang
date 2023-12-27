/* Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.*/

#include <stdio.h>
#include "function.c"

int main()
{
    int n;
    n = getArrayLength();
    printf("\n");

    int arr[n];

    arryInput(arr, n);
    printf("\n");
    arraySum(arr, n);
}