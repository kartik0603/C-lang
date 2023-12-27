// // C program to reverse array
// // using pointers
// #include <stdio.h>

// // Function to swap two memory contents
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
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

// // Function to reverse the array through pointers
// void reverse(int array[], int array_size)
// {
//     // pointer1 pointing at the beginning of the array
//     int *pointer1 = array,

//         // pointer2 pointing at end of the array
//         *pointer2 = array + array_size - 1;
//     while (pointer1 < pointer2)
//     {
//         swap(pointer1, pointer2);
//         pointer1++;
//         pointer2--;
//     }
// }

// // Function to print the array
// void print(int *array, int array_size)
// {
//     // Length pointing at end of the array
//     int *length = array + array_size,

//         // Position pointing to the beginning of the array
//         *position = array;
//     printf("Array = ");
//     for (position = array; position < length; position++)
//         printf("%d ", *position);
// }

// int main()
// {
//     int n, a, array, array_size;
//     n = getArrayLength();

//     arryInput(a, n);

//     reverse(array, n);

//     print(array, array_size);
// }

#include <stdio.h>

// Function to swap two memory contents
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to get the array length from the user
int getArrayLength()
{
    int n;
    printf("Enter Array Length: ");
    scanf("%d", &n);
    return n;
}

// Function to input array elements from the user
void arrayInput(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter Array Element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// Function to reverse the array through pointers
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

// Function to print the array
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

