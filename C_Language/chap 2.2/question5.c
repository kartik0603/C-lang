#include <stdio.h>
int main()
{

    const float Pi = 3.14;
    int r;

    printf("Enter the radius of Circle\t:");
    scanf("%d", &r);
    printf("The Perimeter of Circle is %f", 2 * (Pi * r));
    return 0;
}