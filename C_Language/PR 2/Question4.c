// Q.4 Write C program uses a switch statement. Display Monday to Sunday.

#include <stdio.h>
int main()
{
    char ch;

    printf(" Enter \t 'S' for Sunday\n \t 'M' for Monday\n \t 'TU' for Tuesday \n \t 'W' for Wendnesday\n \t 'TH' for Thursday \n \t 'F' for Friday\n \t 'SA' for Saturday \n  ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'S':
        printf(" Sunday\n");
        break;

    case 'M':
        printf(" Monday\n");
        break;

    case 'TU':
        printf(" Tuesday\n");
        break;

    case 'W':
        printf(" Wendnesday\n");
        break;

    case 'TH':
        printf(" Thursday\n");
        break;

    case 'F':
        printf(" Friday\n");
        break;

    case 'SA':
        printf(" Saturday\n");
        break;

    default:
        printf(" Invalid Entry");
        break;
    }
    return 0;
}