#include <stdio.h>
int SelectionSort(int arr[], int size)
{
    int i, j, flag, smallestIndex;
    for (i = 0; i < size - 1; i++)
    {
        smallestIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[smallestIndex])
                smallestIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[smallestIndex];
        arr[smallestIndex] = temp;
    }
}
int main()
{
    int arr[10] = {7, 3, 6, 4, 2, 1, 9, 11, 23, 0};
    SelectionSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
