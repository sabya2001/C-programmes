// Bubble sort is a subtract and conquer algorithm which checks the current element with next element.
// Best time complexity here in this implementation is O(n^2)
// Worst time complexity here in this implementation is o(n^2)
// This implementation is dependent on structure i.e. it does not matter what is the content of the array it will iterate same number of times.
#include <stdio.h>
void swap(int *firstElement, int *secondElement)
{
    int temp = *firstElement;
    *firstElement = *secondElement;
    *secondElement = temp;
}
void bubbleSort(int *arrPtr, int size)
{
    // Sorting in non-decreasing order.
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = 0; j < (size - i - 1); j++)
        {
            if (arrPtr[j] > arrPtr[j + 1]) // If current element is greater than the next element
            {
                // If greater then swap
                swap(&arrPtr[j], &arrPtr[j + 1]);
            }
        }
    }
}
void printArray(int *arrPtr, int size)
{
    size_t i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arrPtr[i]);
    }
}
int main()
{
    int size;
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);
    int arr[size]; // Declaring the array of size 'size'
    // Inserting all the elements in array by taking input from user
    printf("Enter elements: ");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printArray(arr, size); // prints the array
    printf("\n");
    // calling the function bubble sort with the array and size because here
    // arr will automatically decay as the pointer to the first element of the array
    // therefore we also need provide the size of the array.
    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}
