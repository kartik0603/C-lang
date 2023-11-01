// Q.4 Write a Program to find Simple interest.

#include <stdio.h>
int main()
{

    float P, R;
    int T;
    printf(" Enter the Princple Amount \t:");
    scanf("%f", &P);
    printf(" Enter the time in year \t:");
    scanf("%d", &T);
    printf(" Enter the rate \t:");
    scanf("%f", &R);
    printf("Your Simple Interest is %f", (P * T * R) / 100);
    return 0;
}