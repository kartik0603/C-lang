#include <stdio.h>
int main()
{

    int a, b, c, d, e;

    printf("Enter value of First Number A \t :");
    scanf("%d", &a);
    printf("Enter value of First Number B \t :");
    scanf("%d", &b);
    printf("Enter value of First Number C \t :");
    scanf("%d", &c);
    printf("Enter value of First Number D \t :");
    scanf("%d", &d);
    printf("Enter value of First Number E \t :");
    scanf("%d", &e);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    printf(" The Maximum Number is \t : %d", a);
                }
                else
                {
                    printf(" The Maximum Number is \t : %d", e);
                }
            }
            else
            {
                if (c > d)
                {
                    if (c > e)
                    {
                        printf(" The Maximum Number is \t : %d", c);
                    }
                    else
                    {
                        printf(" THe Maximum Number is \t : %d", e);
                    }
                }
                else
                {
                    if (d > e)
                    {
                        printf(" The  Maximum Number is \t : %d", d);
                    }
                    else
                    {
                        printf(" The Maximum Number is \t : %d", e);
                    }
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    printf(" The Maximum Number is \t : %d", b);
                }
                else
                {
                    printf(" The Maximum Number is \t : %d", e);
                }
            }
            else
            {
                if (d > e)
                {
                    printf(" The Maximum Number is \t : %d", d);
                }
                else
                {
                    printf(" The MAximum Number is \t : %d", e);
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    printf(" The Maximum Number is \t : %d", c);
                }
                else
                {
                    printf(" The Maximum Number is \t : %d", e);
                }
            }
            else
            {
                if (d > e)
                {
                    printf(" The Maximum Number is \t : %d", d);
                }
                else
                {
                    printf(" The Maximum Number is \t : %d", e);
                }
            }
        }
    }
    return 0;
}