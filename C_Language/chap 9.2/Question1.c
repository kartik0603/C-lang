/*
Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
- Password must contain at least one letter, one digit & one special symbol.
- Password must be at least 6 characters.For example,
Input:
Create your password: Admin@123

Output:
Your password is Strong.

-----------------------------------------

For example,
Input:
Create your password: hello#89

Output:
Your password is not Strong.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[8];

    printf("Enter Password it's Must be  contain 8 digit , special character and Capital Alphabate \t:\n");
    gets(str);

    int Digit = 0, Special = 0, Upper = 0, i;

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            Digit = 1;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            Upper = 1;
        }
        else if (str[i] == '@' || (str[i] >= '!' && str[i] <= '&'))
        {
            Special = 1;
        }
    }

    if (Digit && Upper && Special && strlen(str) >= 8)
    {
        printf("Your Password is STRONG\n");
    }
    else
    {
        printf("Your Password is not Strong\n");
    }

    printf(" Your Password is:\t%s ", str);

    return 0;
}