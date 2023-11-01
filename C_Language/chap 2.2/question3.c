// Q.3 Write a Program to find the area of a triangle.

#include <stdio.h>
int main()
{

    int a, b;

    printf(" Enter the height of Triangle");
    scanf("%d", &a);
    printf("Enter the base of Triangle");
    scanf("%d", &b);
    printf("Area of Triangle is %f", 0.5 * a * b);
    return 0;
}