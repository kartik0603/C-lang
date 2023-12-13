/* Write a Program to count the frequency of each character in a given string.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, count[26] = {0};

    printf("Enter a string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        count[str[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c occurs %d times\n", i + 'a', count[i]);
        }
    }

    return 0;
}

