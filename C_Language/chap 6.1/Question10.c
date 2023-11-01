// Q.9 Write a Program  for ANY MULTIPLICATION TABLE using a while loop.

#include <stdio.h>
int main()
{
    int number, a = 1;

    printf(" ENTER ANY NUMBER FOR MULTIPLICATION TABLE \t : ");
    scanf("%d", &number);

    while (a <= 10)
    {
        printf("%d X %d = %d \n \n ", number, a, number * a);
        a++;
    }
    return 0;
}