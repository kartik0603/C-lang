/* Q.1 Write a Program to find the length of a string using a Pointer.*/


#include <stdio.h>
#include<string.h>

int main() {

    char str[100], * ptr;
    int count;

    printf("Enter any string: ");
    gets(str);

 
    ptr = str;

    count = 0;

    while ( *ptr != '\0') {
        count++;
        ptr++;
    }

    printf("The length of the string is: %d", count);

    return 0;

}