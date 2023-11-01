// Q.2 Write a Program to find the area of a rectangle.

#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter the Length of Rectangle ");
    scanf("%d", &a);
    printf("Enter the Width of Rectangle");
    scanf("%d", &b);

    printf("Area of Rectangle is %d", a * b);
    return 0;
}