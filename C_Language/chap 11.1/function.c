// #include <stdio.h>

// int getInt()
// {
//     int n;
//     scanf("%d", &n);
//     return n;
// }

// int getArrayLength()
// {
//     int n;
//     printf(" Enter Array Length\t:");
//     scanf("%d", &n);
//     return n;
// }

// void arryInput(int a[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf(" Enter Array Elements a[%d] = ", i);
//         a[i] = getInt();
//     }
// }
//  void arrySquare(int a[], int n)
//  {
//     int i, Square =1;
//     for ( i = 0; i < n; i++)
//     {
//         Square =a[i]*a[i];
//     }
//     printf("Square of Array Elements %d ",Square);
//  }

#include <stdio.h>

int getInt()
{
    int n;
    scanf("%d", &n);
    return n;
}

int getArrayLength()
{
    int n;
    printf("Enter Array Length: ");
    scanf("%d", &n);
    return n;
}

void arrayInput(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter Array Elements a[%d] = ", i);
        a[i] = getInt();
    }
}

void arraySquare(int a[], int n)
{
    int i;
    printf("Square of Array Elements: ");
    for (i = 0; i < n; i++)
    {
        int square = a[i] * a[i];
        printf("%d ", square);
    }
    printf("\n");
}
