// Q.2 Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.
// For example,
// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 1

// Press 1 for Internet Recharge
// Press 2 for Top-up Recharge
// Press 3 for Special Recharge
// Enter your choice: 2

// You have successfully done Top-up Recharge.

// ---------------------------------------------

// For example,
// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 2

// Internet Recharge ke liye 1 dabaiye
// Top-up Recharge ke liye 2 dabaiye
// Special Recharge ke liye 3 dabaiye
// Enter your choice: 1

// Aapne safaltapurvak Internet Recharge kar liya he.

// ---------------------------------------------

// For example,
// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 3

// Internet Recharge mate 1 dabavo
// Top-up Recharge mate 2 dabavo
// Special Recharge mate 3 dabavo
// Enter your choice: 3

// Tame safaltapurvak Special Recharge karyu chhe.

#include <stdio.h>
int main()
{
    int a, b;

    printf(" Press 1 For English   \t : \n");
    printf(" Press 2 For Hindi     \t : \n");
    printf(" Press 3 For Gujarati  \t : \n");
    printf(" Enter Your Choise     \t : \n ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf(" Press 1 for Internet Recharge    \t : \n");
        printf(" Press 2 for Top-Up Recharge      \t : \n");
        printf(" Press 3 for Special Recharge     \t : \n");
        printf(" Enter Your Choise               \t : \n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf(" You Have Successfully done  Your Internet Recharge. \t \n");
            break;
        case 2:
            printf(" You Have Successfully done your Top-Up Recharge.         \t \n");
            break;

        case 3:
            printf(" You Have Successfully done your Special Recharge.         \t \n");
            break;

        default:
            printf(" Invalid Entery Please Try Agin");
            break;
        }
        break;

    case 2:

        printf(" Internet Recharge Ke Liye  1 dabaiye    \t : \n");
        printf(" Top-up Recharge ke liye    2 dabaiye    \t : \n");
        printf(" Special Recharge Ke Liye   3 Dabaiye    \t : \n");
        printf(" Enter Your Choise  \t  : \n");
        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf(" Aapne Safalta Purvak Internet Recharge Kar liya Hai      \t  \n");
            break;

        case 2:
            printf(" Aapane Safalta Purvak Top-Up Recharge KAr Liya hai       \t  \n");
            break;

        case 3:
            printf(" Aapane Safalta Purvak Special Recharge Kar liya hai      \t  \n");
            break;

        default:
            printf(" Invalid Entery Please Try Agin");
            break;
        }
        break;

    case 3:
        printf(" Internet REcharge Mate  1 Dabavo \t : \n");
        printf(" Top-up Recharge Mate   2 Dabavo \t :  \n");
        printf(" Special Recharge Mate   3 Dabavo \t :   \n");
        printf(" Enter Your Choise  \t : \n");
        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf("Tame Safta Purvak Internet Recharge Kari Lidhu Che     \t  n");
            break;

        case 2:
            printf(" Tame Safalta Purvak Top -Up recharge Kari lidhu che    \t  \n");
            break;

        case 3:
            printf(" Tame Saflta Purvak Special Recharge Kari lidhu che     \t  \n");
            break;

        default:
            printf(" Invalid Entery Please Try Agin");
            break;
        }
        break;

    default:
        printf(" Invalid Choise");
    }
    return 0;
}
