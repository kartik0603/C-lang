#include <stdio.h>

int main()

{
    float c, fahrenheit;

    printf("Enter temperature in Celsius \t: ");
    scanf("%f", &c);

    fahrenheit = (c * 9 / 5) + 32;

    printf("Temperature in Fahrenheit \t: %.2f\n", fahrenheit);

    return 0;
}