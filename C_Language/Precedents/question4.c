#include <stdio.h>
int main()
{

    int x = 5;
    int y = 3;
    int z = 2;
    printf("Result for Formula (x+y+z) whole cube is \t : %d", (x * x * x) + (y * y * y) + (z * z * z) + 3 * ((x + y) * (y + z) * (z + x)));
    return 0;
}