// To check Number is Palindrome or not

#include <stdio.h>
int main()
{
    int n, revNum = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        revNum = revNum * 10 + remainder;
        n /= 10;
    }

    if (original == revNum)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}