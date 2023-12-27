#include <stdio.h>

int getArrayLength()
{
    int n;
    printf(" Enter Number  (1 to 100)\t:");
    scanf("%d", &n);
    return n;
}

int getInt()
{
    int n;
    scanf("%d", &n);
    return n;
}

void arrayInput(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter Number  %d\t:", i);
        arr[i] = getInt();
    }
}

void arrayMax(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("Largest Number = %d", arr[0]);
}