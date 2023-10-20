#include <stdio.h>
int main()
{
    int number;

    printf("Enter A Number \t: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("You Have Enter A Even Number \t: ");
    }
    else
    {
        printf("You Have Enter an Odd Number \t :");
    }
    return 0;
}