// #include <stdio.h>
// int main()
// {
//     int a;
//     int result1, result2, result3, result4;

//     printf(" Enter Your Elctricity UNIT \t : ");
//     scanf("%d", &a);

//     switch (a)
//     {
//     case 50:
//         result1 = 50 * a * 0.2 * 0.5;
//         printf(" Your Elctericity BILL is \t : %d", result1);
//         break;

//     case 100:
//         result2 = (100 - 50) * a * 0.2 * 0.75;
//         printf(" Your Elcetricity BILL is \t : %d \n", result2);
//         break;

//     case 200:
//         result3 = (200 - 100) * a * 0.20 * 1.20;
//         printf(" Your Electricity BILL is \t : %d \n", result3);
//         break;

//     case 250:
//         result4 = (250 - 200) * a * 0.2 * 1.50;
//         printf(" Your Electricity BILL is \t : %d \n", result4);
//         break;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    float a;
    float result1, result2, result3, result4;

    printf(" Enter Your Elctricity UNIT \t : ");
    scanf("%f", &a);

    if (a <= 50)
    {
        result1 = a * 0.20 * 0.5;
        printf(" Your Electricity BILL is %.2f \t : \n", result1);
    }
    else if (a <= 100)
    {
        result2 = 50 * 0.20 + (a - 50) * 0.75;
        printf(" Your Electricity BILL is %.2f \t : \n", result2);
    }
    else if (a <= 200)
    {
        result3 = 50 * 0.2 + (a - 100) * 1.20;
        printf(" Your Electricity BILL is %.2f \t : \n", result3);
    }
    else
    {
        result4 = 50 * 0.2 + (a - 200) * 1.50;
        printf(" Your Electricity BILL is %.2f \t : \n", result4);
    }
    return 0;
}