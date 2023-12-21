#include <stdio.h>
#include "function.c"

int main()

{
    int a, b;

    printf("Enter Number 1\t:");
    scanf("%d", &a);

    printf("Enter Number 2\t:");
    scanf("%d", &b);

    int choice;
    printf("Choose operation \n\t Enter 1 for : Sum + \n\t Enter 2 for : Subtraction -\n\t Enter 3 for : Multiplication *\n\t Enter 4 for : Division /\n\t Enter 5 for : Modulus %%\n\t Enter 6 for : Exit\n ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("Sum: %d", sum(a, b));
        break;

    case 2:

        printf("Subtraction: %d", sub(a, b));
        break;

    case 3:

        printf("Multiplication: %d", mul(a, b));
        break;

    case 4:

        if (b != 0)
        {
            printf("Division: %d", divide(a, b));
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;

    case 5:

        if (b != 0)
        {
            printf("Modulus: %d", mod(a, b));
        }
        else
        {
            printf("Error: Modulus by zero\n");
        }
        break;

    case 6:

        printf("Exiting...\n");
        break;

    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}