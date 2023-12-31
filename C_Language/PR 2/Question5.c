// Q.5 Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

#include <stdio.h>
int main()
{
    float a;
    float result,
        finalBill;

    printf(" Enter Your Elctricity UNIT \t : ");
    scanf("%f", &a);

    if (a >= 0 && a <= 50)
    {
        result = a * 0.50;
        printf(" Your Electricity BILL is %.2f \t : \n", result);
    }
    else if (a >= 51 && a <= 150)
    {
        result = 25 + (a - 50) * 0.75;
        printf(" Your Electricity BILL is %.2f \t : \n", result);
    }
    else if (a >= 151 && a <= 250)
    {
        result = 100 + (a - 150) * 1.20;
        printf(" Your Electricity BILL is %.2f \t : \n", result);
    }
    else
    {
        result = 220 + (a - 250) * 1.50;
        printf(" Your Electricity BILL is %.2f \t : \n", result);
    }

    finalBill = (result * 0.2) + result;
    printf(" Your Final Elecricity Bill Included Surcharge with 20 Percentage is \t : %.2f   \n", finalBill);

    return 0;
}
