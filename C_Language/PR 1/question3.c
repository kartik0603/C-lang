#include <stdio.h>
int main()
{

    int first_Angle;
    int second_Angle;
    int result;

    printf(" Enter the First Angle of Triangle \t:");
    scanf("%d", &first_Angle);

    printf(" Enter the Second Angle of Triangle \t:");
    scanf("%d", &second_Angle);

    result = (90 - first_Angle) + (90 - second_Angle);
    printf(" Third Angle of Trinagle is \t : %d", result);
    return 0;
}