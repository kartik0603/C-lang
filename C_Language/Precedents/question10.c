#include <stdio.h>
int main()
{

    int x, y, result;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    result = (x * x * x * x) + (4 * x * x * x * y) + (6 * x * x * y * y) + (4 * x * y * y * y) + (y * y * y * y);
    printf("Result for Formula (x+y)^4 is \t : %d", result);
    return 0;
}
