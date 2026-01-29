#include <stdio.h>
int deleteElem(int arr[], int size, int idx, int cap)
{
    if (size >= cap || idx > size || idx < 0)
    {
        return -1;
    }
    else
    {
        for (int i = idx; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        return 1;
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf(" \n");
}
int main()
{
    int arr[20] = {3, 11, 27, 42, 89};
    int idx = 3, cap = 20, size = 5;
    display(arr, size);
    int res = deleteElem(arr, size, idx, cap);
    if (res == 1)
    {
        size -= 1;
        printf("Deletion successful! \n");
        display(arr, size);
    }
    else
        printf("Deletion unsuccessful \n");

    return 0;
}
