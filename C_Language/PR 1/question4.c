#include <stdio.h>
int main()
{
    int a, b, c;

    printf(" Enter the First Number A \t:");
    scanf("%d", &a);

    printf(" Enter the Second  Number B \t:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf(" A \t: %d\n", a);
    printf(" B \t: %d\n", b);

    return 0;
}