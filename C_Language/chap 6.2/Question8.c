// Write a Program to print leap years between two given numbers using a For Loop

#include <stdio.h>
int main()
{
    int startYear, endYear;
    int i;
    int year = startYear;
    i = year;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);
    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    for (i = startYear; i <= endYear; i++)
    {
        if ((i % 4 == 0))
        {
            printf("%d is a leap year \n ", i);
        }
    }
    return 0;
}
