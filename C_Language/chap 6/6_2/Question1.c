// Program to find the minimum number from the  3 numbers using nested if else

#include <stdio.h>
int main()
{

    int a, b, c;

    printf(" Enter value of a \t:\n");
    scanf("%d", &a);

    printf(" Enter value of b \t:\n");
    scanf("%d", &b);

    printf(" Enter value of c \t:\n");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("The Minimum Value is \t:%d", a);
        }
        else
        {
            printf("The Minimum Value is \t:%d", c);
        }
    }
    else
    {
        if (b < c)
        {
            printf("The Minimum Value is \t:%d", b);
        }
        else
        {
            printf("The Minimum Value is \t:%d", c);
        }
    }
    return 0;
}
