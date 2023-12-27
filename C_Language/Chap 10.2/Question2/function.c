#include <stdio.h>
#include <string.h>

int getInt()
{
    int n;
    scanf("%d", &n);
    return n;
}

int stringLength(char str[100])

{
    int l;

    l = strlen(str);

    printf("String length %d", l);
}
