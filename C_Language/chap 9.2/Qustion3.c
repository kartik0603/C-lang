/*

Q.3 Write a Program to convert the string title case.
For example,
Input:
Enter the string: hello

Output:
String: Hello

*/

#include <stdio.h>
#include <string.h>

int main()
{

    char str[20];

    printf(" Enter String in UPPER CASE\t:\n");
    gets(str);

    printf("String in LOWER CASE\t: %s", strlwr(str));

    return 0;
}