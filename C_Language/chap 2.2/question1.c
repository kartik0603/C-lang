// Q .1 Write a Program to find the area of a circle.

#include <stdio.h>
int main()
{
    const float Pi = 3.14;
    int r;

    printf("Enter Radius of Circle:\t %d\n", r);
    scanf("%d", &r);
    printf(" Area of Circle %.2f  ", Pi * r * r);
    return 0;
}