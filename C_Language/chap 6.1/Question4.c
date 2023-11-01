// Q.4 Write a Program to print odd numbers from N to 1 using a while loop.

#include <stdio.h>

int main()
{
    int n;
    int a;

    printf("Enter Any Number: ");
    scanf("%d", &n);
    a = n;

    while (a >= 1)
    {
        if (a % 2 == 1)
        {
            printf("ODD Number = %d \n", a);
        }

        a--;
    }

    return 0;
}
