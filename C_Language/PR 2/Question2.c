#include <stdio.h>
int main()
{
    int a;

    printf(" Enter any Number \t :");
    scanf(" %d", &a);

    (a % 2 == 0)
        ? printf("you have enter  EVEN Number \n")
        : printf(" You Have Enter A ODD Number \n");

    return 0;
}
