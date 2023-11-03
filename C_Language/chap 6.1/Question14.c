// To check Number is Magic Number Or not
#include <stdio.h>
int main()
{
    int num, original, remainder, result = 0, result1, result2;
    printf("Enter any 3 digit NUMBER \t: ");
    scanf("%d", &num);
    original = num;

    while (original != 0)
    {

        remainder = original % 10;

        result = (remainder * remainder * remainder) + result;
        result1 = result * result * result;
        result2 = result + result + result;

        original /= 10;
    }

    if (result1 == result2)
    {
        printf("%d   is Magic Number \t:", num);
    }
    else
    {
        printf("%d   is NOT a Magic Number \t:", num);
    }
    return 0;
}
