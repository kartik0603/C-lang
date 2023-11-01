// Q.1 Write C program to input any character and check whether it is the alphabet , digit or special character

#include <stdio.h>
int main()

{
    char ch;
    printf(" Enter Any Character \t  :\n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf(" You have Enter Alphabate \n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf(" YOU HAVE Enter a DIGIT \n");
    }
    else
    {
        printf(" You Have Enter Special Character \n");
    }
    return 0;
}