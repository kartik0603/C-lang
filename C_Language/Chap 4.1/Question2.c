// 2. Create a program and Use Arithmetic Operator.

#include <stdio.h>
int main()
{

    int a, b, result, result1, result2, result3, result4;

    printf("Enter a \t : ");
    scanf("%d", &a);

    printf("Enter b \t :");
    scanf("%d", &b);

    result = a + b;
    result1 = b - a;
    result2 = a * b;
    result3 = b / a;
    result4 = b % a;

    printf("Addition of 10 and 20 Ans           \t: %d\n", result);
    printf("Subtraction of 20 and 10 Ans        \t: %d\n", result1);
    printf("Multiplication of 10 and 20 Ans     \t: %d\n", result2);
    printf("Division of 20 and 10 Ans           \t: %d\n", result3);
    printf("Modues of 20 and 10 Ans             \t: %d\n", result4);

    return 0;
}