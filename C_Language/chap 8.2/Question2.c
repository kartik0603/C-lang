/* Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array */

#include <stdio.h>

int main()
{
    int year, year1, year2;

    printf("Enter starting Year: ");
    scanf("%d", &year1);

    printf("Enter Ending Year: ");
    scanf("%d", &year2);

    int leapYears[year2 - year1 + 1];
    int leapYearCount = 0;

    for (year = year1; year <= year2; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            leapYears[leapYearCount] = year;
            leapYearCount++;
        }
    }

    printf("Leap years between %d and %d are:\n", year1, year2);
    for (int i = 0; i < leapYearCount; i++)
    {
        printf("%d ", leapYears[i]);
    }

    return 0;
}
