#include <stdio.h>
int binarySearch(int *arr, int search, int size)
{
    int low = 0, high = size;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (search < arr[mid])
            high = mid - 1;
        else if (search > arr[mid])
            low = mid + 1;
        else if (search == arr[mid])
            return mid;
    }
    return -1;
}
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 6, 7, 9, 11, 23};
    int search = 9;
    int size = (sizeof(arr) / sizeof(arr[0])) - 1;
    ;
    int res = binarySearch(arr, search, size);
    if (res != -1)
        printf("Found at index %d", res);
    else
        printf("Not found");
}