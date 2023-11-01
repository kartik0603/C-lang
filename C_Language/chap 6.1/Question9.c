// Q.9 Write a Program  for print A TO Z APLPHABATE using a while loop.

#include <stdio.h>
int main()
{
    char a = 'A';
    while (a <= 'Z')
    {
        printf("ALPHABATE IS \t : \t  %c \n ", a++);
    }
    return 0;
}
