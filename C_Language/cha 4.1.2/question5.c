// Q.5 Write a Program to find the formula's answer (x+y)^3.

#include <stdio.h>
int main()
{
    int x = 5;
    int y = 3;
    printf("Formula Result for (x+y) whole cube \t: %d", (x * x * x) + (3 * x * x * y) + (3 * x * y * y) + (y * y * y));
    return 0;
}

// #include <stdio.h>
// int main()
// {

//     int x, y, result;
//     printf("Enter the value of x: ");
//     scanf("%d", &x);

//     printf("Enter the value of y: ");
//     scanf("%d", &y);

//     result = (x * x * x) + (3 * x * x * y) + (3 * x * y * y) + (y * y * y);
//     printf("Formula Result for (x+y) whole cube \t: %d", result);
//     return 0;
// }
