#include <stdio.h>
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 6, 7, 9, 11, 23};
    int search = 9;
    int low = 0, high = (sizeof(arr) / sizeof(arr[0])) - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (search < arr[mid])
            high = mid - 1;
        else if (search > arr[mid])
            low = mid + 1;
        else if (search == arr[mid])
        {
            printf("Found at Index %d", mid);
            return 0;
        }
    }
    printf("Not Found!");
}