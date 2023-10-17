#include <stdio.h>
int main()
{

    int x, y, result;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    result = (x * x * x) + (3 * x * x * y) + (3 * x * y * y) + (y * y * y);
    printf("Formula Result for (x+y) whole cube \t: %d", result);
    return 0;
}
