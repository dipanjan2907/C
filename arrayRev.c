#include <stdio.h>
void rev(int arr[], int l);
void printArr(int arr[], int l);

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    rev(arr, sizeof(arr) / sizeof(arr[0]));
    printArr(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}

void rev(int arr[], int l)
{
    for (int i = 0; i < l / 2; i++)
    {
        int temp = arr[l - i - 1];
        arr[l - i - 1] = arr[i];
        arr[i] = temp;
    }
}
void printArr(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("%d, ", arr[i]);
    }
}