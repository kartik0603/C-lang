#include <stdio.h>
#include "function.c"

int main()
{
    int n;
    n = getArrayLength();

    int a[n];

    arrayInput(a, n);

    reverse(a, n);

    print(a, n);

    return 0;
}
