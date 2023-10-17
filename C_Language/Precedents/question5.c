#include <stdio.h>
int main()
{

    int x = 5;
    int y = 3;

    printf("Result for Formula (x+y)^4 is \t : %d", (x * x * x * x) + (4 * x * x * x * y) + (6 * x * x * y * y) + (4 * x * y * y * y) + (y * y * y * y));
    return 0;
}