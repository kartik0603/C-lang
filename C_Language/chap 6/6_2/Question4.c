// 6 Variable find MAximum Number Using Neted If else.

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;

    printf(" Enter The Value of First Number a \t :");
    scanf("%d", &a);
    printf(" Enter The Value of First Number b \t :");
    scanf("%d", &b);
    printf(" Enter The Value of First Number c \t :");
    scanf("%d", &c);
    printf(" Enter The Value of First Number d \t :");
    scanf("%d", &d);
    printf(" Enter The Value of First Number e \t :");
    scanf("%d", &e);
    printf(" Enter The Value of First Number f \t :");
    scanf("%d", &f);

    if (a < b)
    {
        if (a < c)
        {
            if (a < d)
            {
                if (a < e)
                {
                    if (a < f)
                    {
                        printf("The Minimum Number is \t : %d", a);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
                else
                {
                    if (e < f)
                    {
                        printf(" The Minimum Number is \t : %d", e);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
            }
            else
            {
                if (d < e)
                {
                    if (d < f)
                    {
                        printf(" The Minimum Number is \t : %d", d);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
                else
                {
                    if (e < f)
                    {
                        printf(" The Minimum Number is \t : %d", e);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
            }
        }
        else
        {
            if (c < d)
            {
                if (c < e)
                {
                    if (c < f)
                    {
                        printf(" The Minimum Number is \t : %d", c);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
                else
                {
                    if (e < f)
                    {
                        printf(" The Minimum Number is \t : %d", e);
                    }
                    else
                    {
                        printf(" The Minimum Numer is \t : %d", f);
                    }
                }
            }
            else
            {
                if (d < e)
                {
                    if (d < f)
                    {
                        printf(" The Minimum Number is \t : %d", d);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
                if (e < f)
                {
                    printf(" The Minimum Number is \t : %d", e);
                }

                else
                {
                    printf(" The Minimum Number is \t : %d", f);
                }
            }
        }
    }

    else
    {
        if (b < c)
        {
            if (b < d)
            {
                if (b < e)
                {
                    if (b < f)
                    {
                        printf(" The Minimum Number is \t : %d", b);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
                else
                {
                    if (e < f)
                    {
                        printf(" The Minimum Number is \t :d", e);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
            }
            else
            {
                if (d < e)
                {
                    if (d < f)
                    {
                        printf(" The Minimum number is \t : %d", d);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
                else
                {
                    if (e < f)
                    {
                        printf(" The Minimum Number is \t : %d", e);
                    }
                    else
                    {
                        printf(" The Minimum Number Is \t : %d", f);
                    }
                }
            }
        }
        else
        {
            if (c < d)
            {
                if (c < e)
                {
                    if (c < f)
                    {
                        printf(" The Minimum Number is \t : %d", c);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
                else
                {
                    if (e < f)
                    {
                        printf(" The Minimum Number is \t : %d", e);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
            }
            else
            {
                if (d < e)
                {
                    if (d < f)
                    {
                        printf(" The Minimum Number is \t : %d", d);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
                else
                {
                    if (e < f)
                    {
                        printf(" The Minimum Number is \t : %d", e);
                    }
                    else
                    {
                        printf(" The Minimum Number is \t : %d", f);
                    }
                }
            }
        }
    }

    return 0;
}