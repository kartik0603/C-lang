// Reverse  Any Digit Numbera Using For Loop
#include <stdio.h>
int main()
{
    int i, n, remainder, reverse = 0;
    printf("Enter Any Number \t: ");
    scanf("%d", &n);
    // reverse = i;
    for (i = n; n != 0; n = n / 10)
    {

        remainder = n % 10;
        reverse = reverse * 10 + remainder;

        printf("The number in reverse order is\t:%d\n", reverse);
    }
    return 0;
}