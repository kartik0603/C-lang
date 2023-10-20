#include <stdio.h>
int main()
{

    int first_Number;
    int second_Number;

    printf("Enter First Number \t: \n");
    scanf("%d", &first_Number);

    printf("Enter Second Number \t: \n");
    scanf("%d", &second_Number);

    if (first_Number < second_Number)
    {
        printf("The Minimum Number is \t : %d\n", first_Number);
    }
    else
    {
        printf("The Minimum Number is \t : %d\n", second_Number);
    }

    return 0;
}