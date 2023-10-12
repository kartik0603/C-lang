// #include <stdio.h>
// int main()

// {
//     const float pi = 3.14;
//     const int a = 10;
//     const char ch = 'A';

//     printf("The value of Pi\t: %.2f\n", pi);
//     printf("The value of a\t: %d\n", a);
//     printf("The value of char\t: %c\n", ch);
//     return 0;
// }

#include <stdio.h>
int main()

{
    const float pi = 3.14;
    const int a = 10;
    const char ch = 'A';

    int b = 20;
    float d = 25.55;

    printf(" pi %.2f\t +  a %d  =\t%.2f\n", pi, a, pi + a);

    printf(" B %d\t /  d %.2f  =\t%.2f\n", b, d, b / d);

    return 0;
}