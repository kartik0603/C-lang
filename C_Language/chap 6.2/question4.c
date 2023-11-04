// // Q.4 Write a Program to print the fibonacci series up to N numbers using for loop

#include <stdio.h>

int main()
{
    int a = 0, b = 1, c;
    int n, i;
    printf("Enter the number of terms for the Fibonacci Series: ");
    scanf("%d", &n);
    printf("%d %d ", a, b);

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    return 0;
}
