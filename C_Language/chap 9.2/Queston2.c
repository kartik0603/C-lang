/*
Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...

-----------------------------------------

For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456

Output:
Login Failed. Invalid Credentials.
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char email[50];
    printf(" Enter Email for Sign Up :\n");
    gets(email);

    printf("\n");

    char password[50];

    printf("Enter Password For Sign Up and  it's Must be  contain 8 digit , special character and Capital Alphabate \t:\n");
    gets(password);

    printf("\n");

    int Digit = 0, Special = 0, Upper = 0, i;

    for (i = 0; i < strlen(password); i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            Digit = 1;
        }
        else if ((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z'))
        {
            Upper = 1;
        }
        else if (password[i] == '@' || (password[i] >= '!' && password[i] <= '&'))
        {
            Special = 1;
        }
    }

    if (Digit && Upper && Special && strlen(password) >= 8)
    {
        printf("Your Password is STRONG\n");
    }
    else
    {
        printf("Your Password is not Strong\n");
    }
    printf("\n");

    // printf("Email: %s \n", email);
    // printf("\n");
    // printf("Password: %s\n", password);
    // printf("\n");

    char emailSignin[50];
    printf(" Enter  Email  for Sign In:\n");
    gets(emailSignin);
    printf("\n");

    char passwordSignin[50];

    printf("Enter Password  for Sign in\n");
    gets(passwordSignin);
    printf("\n");

    if (strcmp(email, emailSignin) == 0 && strcmp(password, passwordSignin) == 0)
    {
        printf("Login Successful\n");
    }
    else
    {
        printf("Login Failed. Invalid Credentials.\n");
    }

    printf("Email for Sign In is\t: %s \n", emailSignin);
    printf("\n");
    printf("Password for Sign In\t: %s\n", passwordSignin);
    printf("\n");

    return 0;
}