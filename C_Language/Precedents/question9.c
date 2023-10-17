#include <stdio.h>
int main()
{

    int x, y, z, result;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Enter the value of z: ");
    scanf("%d", &z);

    result = (x * x * x) + (y * y * y) + (z * z * z) + 3 * ((x + y) * (y + z) * (z + x));
    printf("Result for Formula (x+y+z) whole cube is \t : %d", result);
    return 0;
}