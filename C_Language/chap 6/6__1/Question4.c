#include <stdio.h>
int main()
{

    char character;

    printf("Enter  Character \t :");
    scanf("%c", &character);

    if (character == 'a')

    {
        printf("You Have Enter a Vowel \t :");
    }
    else if (character == 'e')
    {
        printf("You Have Enter a Vowel \t :");
    }
    else if (character == 'i')
    {
        printf("You Have Enter a Vowel \t :");
    }
    else if (character == 'o')
    {
        printf("You Have Enter a Vowel \t :");
    }
    else if (character == 'u')
    {
        printf("You Have Enter a Vowel \t :");
    }
    else if (character >= '0' && character <= '9')
    {
        printf("You Have Enter a Number  from 1 to 100 \t :");
    }

    else
    {
        printf("You have Enter a console \t :");
    }
    return 0;
}
