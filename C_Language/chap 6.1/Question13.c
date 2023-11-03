// To Check NUmber is Armstrong or Not

#include <stdio.h>
int main()
{
    int num, original, remainder, result = 0;
    printf("Enter any 3 digit NUMBER \t: ");
    scanf("%d", &num);
    original = num;

    while (original != 0)
    {

        remainder = original % 10;

        result = (remainder * remainder * remainder) + result;

        original /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}
