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

    result = (x * x) + (y * y) + (z * z) + (2 * x * y) + (2 * y * z) + (2 * x * z);
    printf("Result for Formula (x+y+z) whole Square is\t: %d\n", result);
    return 0;
}
