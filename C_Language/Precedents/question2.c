#include <stdio.h>
int main()
{
    int x = 5;
    int y = 3;
    printf("Formula Result for (x+y) whole cube \t: %d", (x * x * x) + (3 * x * x * y) + (3 * x * y * y) + (y * y * y));
    return 0;
}