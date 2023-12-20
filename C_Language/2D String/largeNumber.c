#include <stdio.h>
#include "function.c"

int main()
{
    int n;
    // printf(" Enter Number\t:");
    n = getInt();

    int arr[n];

    arrayInput(arr, n);
    arrayOutput(arr, n);
}