#include <stdio.h>
int main()
{
    int a = 1, n;

    printf("Enter Any Number \t : ");
    scanf("%d", &n);

    while (a <= n)
    {
        printf("%d \n", a++);
    }
    return 0;
}