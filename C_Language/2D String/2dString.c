#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;

    printf(" Enter Number Of Names\t:");
    scanf("%d", &n);

    printf("\n");

    // input

    // fflush(stdin);
    char names[n][30], temp[30];

    for (i = 0; i < n; i++)
    {
        printf("Enter Name %d\t:", i + 1);
        // gets(names[i]);
        scanf("%s", names[i]);
    }

    // output

    for (i = 0; i < n; i++)
    {
        printf("%d ) Name\t: %s\n", i + 1, names[i]);
    }

    // sorting

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) == 1)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nNames after sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d) Name: %s\n", i + 1, names[i]);
    }
    return 0;
}