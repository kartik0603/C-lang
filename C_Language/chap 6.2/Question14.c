// Multiplication Talr Using For loop

#include <stdio.h>
int main()
{
    int i, n;
    int table;
    printf(" Enter Any Number For Multiplication Table \t : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {

        printf("%d\tX\t%d\t=\t%d\n", n, i, (n * i));
    }
    return 0;
}