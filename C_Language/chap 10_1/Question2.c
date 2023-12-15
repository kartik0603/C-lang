/* Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.*/

#include <stdio.h>

void divisible(int a)

{

    if (a % 3 == 0 || a % 5 == 0)
    {
        printf("A is Divisibale by %d\n", a);
    }
    else
    {
        printf(" A is not Divisible by %d\n", a);
    }
}
int main()
{
    int a;
    printf(" Enter A\t:");
    scanf("%d", &a);

    divisible(a);
}