#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// the main part of bubble sort function
void bubbleSort(int array[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++) if (array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
}
// a function to print the elements of an array
void printArray(int array[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", array[i]);
}

int main()
{
    int array[] = {-1, 5, 4, 3, 2};
    int size = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, size);
    printf("Sorted array: ");
    printArray(array, size);
    return 0;
}