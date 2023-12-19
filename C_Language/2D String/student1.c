

#include <stdio.h>

char getGrade()
{
    int a, b, c, d, e, f, g;

    printf(" Enter Subject 1 Marks\t:");
    scanf("%d", &a);

    printf(" Enter Subject 2 Marks\t:");
    scanf("%d", &b);

    printf(" Enter Subject 3 Marks\t:");
    scanf("%d", &c);

    printf(" Enter Subject 4 Marks\t:");
    scanf("%d", &d);

    printf(" Enter Subject 5 Marks\t:");
    scanf("%d", &e);

    printf(" Enter Subject 6 Marks\t:");
    scanf("%d", &f);

    printf(" Enter Subject 7 Marks\t:");
    scanf("%d", &g);

    float total = (float)(a + b + c + d + e + f + g) / 7;

    char Grade;

    if (total >= 90 && total <= 100)
    {
        Grade = 'A';
    }
    else
    {
        Grade = 'B';
    }

    return Grade;
}