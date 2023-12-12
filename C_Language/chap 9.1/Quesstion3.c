#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", &str);
    // fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    printf("The string in toggle case is: %s\n", str);

    return 0;
}