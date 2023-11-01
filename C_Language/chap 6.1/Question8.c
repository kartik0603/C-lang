// Q.8 Write a Program  numbers from 1 to N for MULITIPLICATION ( FACTORIAL) using a while loop.

#include <stdio.h>

int main()
{
    int n, a = 1;
    int multi = 1;

    printf("Enter Any Number \t : ");
    scanf("%d", &n);

    while (a <= n)
    {
        multi *= a;
        a++;
    }

    printf("MULTIPLICATION is %d", multi);
    return 0;
}
