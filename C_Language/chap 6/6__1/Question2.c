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