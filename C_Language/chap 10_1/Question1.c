/* Q.1 Write a Program to find the cube of a given number using UDF.*/

#include <stdio.h>

void cube(int a)

{
    printf("Cube \t:%d\n", a * a * a);
}
int main()
{
    int a;
    printf(" Enter A\t:");
    scanf("%d", &a);

    cube(a);
}