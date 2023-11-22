// Q.4 Write a Program to print the below pattern using nested for loop.
//  1 0 1 0 1
//    0 1 0 1
//      1 0 1
//        0 1
//          1

#include <stdio.h>
int main()
{
    int i, j, s;

    for (i = 5; i >= 1; i--)
    {
        for (s = 5; s > i; s--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    return 0;
}