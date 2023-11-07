// Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.

#include <stdio.h>
int main()
{
    char a = 'A';
    do
    {
        printf("%c ", a);
        a += 4;
    } while (a <= 'Z');
    return 0;
}