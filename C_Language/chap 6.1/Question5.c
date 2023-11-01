// Q.5 Write a Program to print leap years between two given numbers using a while loop.

#include <stdio.h>

int main()
{
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);
    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    int year = startYear;
    while (year <= endYear)
    {
        if ((year % 4 == 0))

        {

            printf("%d is a leap year\n", year);
        }
        year++;
    }

    return 0;
}
