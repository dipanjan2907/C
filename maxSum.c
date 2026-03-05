#include <stdio.h>

int maxSum(int arr[], int size)
{
    int max = arr[0] + arr[1];
    for (int i = 1; i < size - 1; i++)
    {
        int current = arr[i] + arr[i + 1];
        if (current > max)
        {
            max = current;
        }
    }
    return max;
}

int main()
{
    int arr[5] = {5, 8, 6, 3, 2};
    int sum = maxSum(arr, 5);
    printf("%d", sum);
    return 0;
}