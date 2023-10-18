#include <stdio.h>
int main()
{

    int a = 10;
    int b = 20;
    int c;

    printf("%d\n", c = a);
    printf("%d\n", a = b);
    printf("%d\n", b = c);
    return 0;
}