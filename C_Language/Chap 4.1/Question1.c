// 1. Create a program to print increment an decrement.

#include <stdio.h>
int main()
{

    int a, result1, result2;
    printf(" Enter Any Number  15:\t");
    scanf("%d", &a);
    result1 = ++a;
    result2 = --a;

    printf("Inctrement \t: %d\n", result1);
    printf("Decrement \t: %d\n", result2);

    return 0;
}