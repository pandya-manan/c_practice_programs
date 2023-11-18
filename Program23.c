#include<stdio.h>
//This program reverses an array of integers
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);  // Corrected the format specifier and added "%d\t"
    }
    printf("\n");  // Added a newline character to separate lines.
}

void reverseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()  // Changed void to int for main
{
    int size;
    printf("Enter the number of elements\n");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element for arr[%d]\n", i);
        scanf("%d", &arr[i]);
    }
    printf("The array before reversal\n");
    printArray(arr, size);
    printf("The array after reversal\n");
    reverseArray(arr, 0, size - 1);  // Corrected the end index
    printArray(arr, size);

    return 0;  // Added a return statement
}
