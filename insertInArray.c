#include <stdio.h>
int insertElem(int arr[], int size, int elem, int idx, int cap)
{
    if (size >= cap || idx > size || idx < 0)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= idx; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[idx] = elem;
        return 1;
    }
}
int display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf(" \n");
}
int main()
{
    int arr[20] = {3, 11, 27, 42, 89};
    int elem = 31, idx = 4, cap = 20, size = 5;
    display(arr, size);
    insertElem(arr, size, elem, idx, cap);
    if (insertElem)
    {
        size += 1;
        printf("Insertion successful! \n");
        display(arr, size);
    }
    else
        printf("Insertion unsuccessful \n");

    return 0;
}
