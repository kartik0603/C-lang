
// Q.2 Write a Program to count the total number of digits in a number.

#include <stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("Enter Any Number \t :");
    scanf("%lld", &n);

    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    printf("Total Digits in Number is %d", count);
    return 0;
}