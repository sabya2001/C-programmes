// Selection sort is a substract and conquer algorithm that is
// after each iteration the problem with size n reduces into the problem of size n-1.
// It is an unstable algorithm that is it doesn't respect the initial relative positioning of the duplicate elements.
// This algo totally depends on the structure i.e. even if we provide sorted array it will still run all the loops.
// Best case time complexity - O(n^2)
// Worst case time complexity - O(n^2)

// C programme to implement selection sort in c
#include <stdio.h>
// Swaps two elements
void swap(int *firstElement, int *secondElement)
{
    int temp = *firstElement;
    *firstElement = *secondElement;
    *secondElement = temp;
}
// Function to sort a integer array in non-decreasing order
void selectionSort(int *arrPtr, int size)
{
    int smallest; // pointer to the smallest element in the unsorted array
    for (size_t i = 0; i < size; i++)
    {
        smallest = i;
        for (size_t j = i + 1; j < size; j++)
        { // check if their exist in any element smaller in the array a[i+1....size] than the current smallest element.
            if (arrPtr[j] < arrPtr[smallest])
            {
                smallest = j; // update the smallest pointer to point it to the current smallest element
            }
        }
        // swap the smallest element at i th position
        swap(&arrPtr[i], &arrPtr[smallest]);
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
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}