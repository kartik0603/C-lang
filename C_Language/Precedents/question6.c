#include <stdio.h>
int main()
{

    int x, y, result;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    result = (x * x) + (2 * x * y) + (y * y);
    printf("Formula result (x+y) whoole square\t:  %d\n", result);
    return 0;
}