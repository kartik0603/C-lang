
/*
Q.2 Write a Program to swap two variables using Pointers.*/

#include <stdio.h>
int main()
{
    int n, i;
    int a, b;
    int *ptr;
    ptr = &a;
    ptr = &b;

    printf("Enter Value Of A :");
    scanf("%d", &a);

    printf("Enter Value Of B :");
    scanf("%d", &b);

    printf("Before Swaping\n");

    printf("a\t:%d\n", a);
    printf("a\t:%d\n", b);

    printf("After Swaping\n");

    if (a != b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}