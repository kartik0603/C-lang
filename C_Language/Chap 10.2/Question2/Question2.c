/* Write a Program to find the length of the String by passing a string as an argument using UDF*/

#include <stdio.h>
#include <string.h>
#include "function.c"

int main()
{
    char str[100];
    int i, len = 0;
    printf("Enter string:\n");
    gets(str);

    stringLength(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return (len);
}