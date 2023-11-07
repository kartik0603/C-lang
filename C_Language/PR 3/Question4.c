
// Q. 4 Write a Program to check number is magic or not.

#include <stdio.h>
int main()
{
    int n, rem, mul = 1, sum;
    printf("Enter Any Number \t :");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        mul = mul * rem;
        sum = sum + rem;
        n = n / 10;
    }
    if (mul == sum)
    {
        printf("  Magic Number");
    }
    else
    {
        printf(" Not a Magic Number");
    }
    return 0;
}