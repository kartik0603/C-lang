

#include <stdio.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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
        printf("Enter Array Element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}


void reverse(int array[], int array_size)
{
    // pointer1 pointing at the beginning of the array
    int *pointer1 = array,

        // pointer2 pointing at end of the array
        *pointer2 = array + array_size - 1;
    while (pointer1 < pointer2)
    {
        swap(pointer1, pointer2);
        pointer1++;
        pointer2--;
    }
}


void print(int *array, int array_size)
{
    // Length pointing at the end of the array
    int *length = array + array_size,

        // Position pointing to the beginning of the array
        *position = array;
    printf(" Reversed Array = ");

    for (position = array; position < length; position++)
        printf("\n%d ", *position);
    printf("\n");
}

