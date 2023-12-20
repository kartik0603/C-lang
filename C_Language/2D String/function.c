#include <stdio.h>

int getInt()
{
    int n;
    double arr[100];
    printf(" Enter Number  (1 to 100)\t:");
    scanf("%d", &n);
    return n;
}
void arrayInput(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" Enter Number  %d\t:", i);
        arr[i] = getInt();
    }
}

void arrayOutput(int arr[], int n)
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