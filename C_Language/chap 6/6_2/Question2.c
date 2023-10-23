#include <stdio.h>
int main()
{

    int a, b, c, d;

    printf(" Enter value First Number of a \t:\n");
    scanf("%d", &a);

    printf(" Enter value Second Number of b \t:\n");
    scanf("%d", &b);

    printf(" Enter value Third Number of c \t:\n");
    scanf("%d", &c);

    printf(" Enter value Fourth Number of d \t:\n");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf(" The Maximum Number is \t : %d", a);
            }
            else
            {
                printf(" The Maximum Number is \t : %d", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf(" The Maximum Number is \t : %d", c);
            }
            else
            {
                printf(" The Maximum Number is \t : %d", d);
            }
        }
    }

    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf(" The Maximum Number is \t : %d", b);
            }
            else
            {
                printf(" The Maximum Number is \t : %d", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf(" The Maximum Number is \t : %d", c);
            }
            else
            {
                printf(" THe Maximum Number is \t : %d", d);
            }
        }
    }
    return 0;
}
