#include <stdio.h>

int main()
{
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);
    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    if (startYear > endYear)
    {
        printf("Starting year should be less than or equal to the ending year.\n");
        return 1;
    }

    int year = startYear;
    while (year <= endYear)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {

            printf("%d is a leap year\n", year);
        }
        year++;
    }

    return 0;
}
