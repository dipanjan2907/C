#include <stdio.h>
void prime(int arr[], int size)
{
    for (int i = 2; i * i <= size; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= size; j += i)
                arr[j] = 0;
        }
    }

    for (int i = 2; i <= size; i++)
        if (arr[i])
            printf("%d ", i);
}

int main()
{
    int size = 20;
    int arr[21];
    for (int i = 0; i <= size; i++)
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    prime(arr, size);
}