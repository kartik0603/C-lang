#include <stdio.h>
int main()
{

    int age;
    printf("Enter Your Age \t:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible for Votting in India....");
    }
    else
    {
        printf("You are not eligible for Vottting in india...");
    }
    return 0;
}