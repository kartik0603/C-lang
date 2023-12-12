/*  Write a Program to convert the given string in uppercase without using any string function */

#include <stdio.h>

int main()
{
    char str[] = "Hello World";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    printf("%s\n", str);

    return 0;
}