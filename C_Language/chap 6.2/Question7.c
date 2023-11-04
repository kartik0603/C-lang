// // Write a Program to print odd numbers from N to 1 using a For Loop

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter Any Number: ");
    scanf("%d", &n);
    printf("All ODD number From  %d to 1  are \t : \n", n);

    for (i = n; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
