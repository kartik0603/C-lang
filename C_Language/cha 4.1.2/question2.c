#include <stdio.h>
int main()
{

    int a = 10;
    int b = 20;

    printf("%d\n", a = a + b);
    printf("%d\n", b = a - b);
    printf("%d\n", a = a - b);
    return 0;
}