// Q.2 Write a Program to find if a given number is neutral or not using a ladder if else.

#include <stdio.h>
int main()
{

    int number;

    printf(" Enter Number \t :");
    scanf("%d", &number);

    if (number == 0)
    {
        printf(" You Have Entered a Natural Number...");
    }
    else if (number > 0)
    {
        printf("You Have Entered a Positive Number...");
    }
    else
    {
        printf(" You Have Entered a Negative Number....");
    }

    return 0;
}