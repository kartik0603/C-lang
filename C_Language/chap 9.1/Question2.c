
/* Q.2 Write a Program to convert the given string in lowercase without using any string function.*/



#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i;

    printf("Enter the string: ");
    scanf("%s", &str);
    // fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    printf("The lowercase string is: %s", str);

    return 0;
}