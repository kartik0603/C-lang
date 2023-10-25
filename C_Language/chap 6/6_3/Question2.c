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
