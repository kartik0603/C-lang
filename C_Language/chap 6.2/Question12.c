// Write a Program  numbers from 1 to N for MULITIPLICATION ( FACTORIAL) using a  For Loop
#include <stdio.h>

int main()
{
    int i, n;
    int a = 1, multi = 1;

    printf("Enter Any Number \t : ");
    scanf("%d", &n);

        for (i = 1; i <= n; i++)
    {
        multi *= a;
        a++;
        printf("%d\n", multi);
    }
    return 0;
}