
// Q.3 Write a Program to find the sum of a first and the last digit of a number.

#include <stdio.h>
int main()
{
    int n, firstDigit, lastdigit, sum;
    printf("Enter Any Number \t : ");
    scanf("%d", &n);

    lastdigit = n % 10;
    firstDigit = n;
    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }
    sum = firstDigit + lastdigit;
    printf(" Sum Of a First and Last Digit =\t%d", sum);
    return 0;
}