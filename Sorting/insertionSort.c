// Insertion sort is also a substract and concquer algrorithm i.e after each iteration their is T(n-1) is left to be solved;
// Insertion sort is not purely based on structure rather it is dependent on both strcuture and content
// Insertion sort is a stable algorithm i.e. it would never change the relative positioning on duplicate elements.
// Best case time complexity - O(n)
// Worst case time complexity - O(n^2)

//C program to implement insertion sort
#include <stdio.h>
// funtion to sort an integer array using insertion sort
void insertionSort(int *arrPtr, int size)
{
    int key , j;
    for (size_t i = 1; i < size; i++)
    {
        key = arrPtr[i]; // Key is the first element in the unsorted part of the array
        printf("%d\n",key);
        j = i - 1;
        // Move the elements of arr[0...(i-1)] that are greater than key,
        //  to one position ahead of their current position, repeat until the conditions are false
        while (j >= 0 && arrPtr[j] > key)
        {
            arrPtr[j + 1] = arrPtr[j];
            j = j-1;
        }
        // insert key into its appropriate position in
        // the sorted part of the array i.e arr[0...(i-1)]
        arrPtr[j + 1] = key;
    }
    return;
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
    // calling the function insertion sort with the array and size because here
    // arr will automatically decay as the pointer to the first element of the array
    // therefore we also need provide the size of the array.
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
    return 0;
}