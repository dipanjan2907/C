#include <stdio.h>
int BinarySearch(int *arr, int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return BinarySearch(arr, low, mid - 1, key);
    else
        return BinarySearch(arr, mid + 1, high, key);
}
void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}
int main()
{
    int size, search, i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to be searched: ");
    scanf("%d", &search);
    sort(arr, size);
    int mid = BinarySearch(arr, 0, size, search);
    if (mid != -1)
        printf("Found");
    else
        printf("Not found");
    return 0;
}
