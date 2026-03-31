#include <stdio.h>

int main()
{
<<<<<<< HEAD
    int arr[6] = {3, 4, 1, 9, 10, 7};
    for (int i = 0; i < 6; i++)
    {
        int e1 = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[e1])
                e1 = j;
        }
    }
=======
    int arr[10] = {7, 3, 6, 4, 2, 1, 9, 11, 23, 0};
    int n = 10, temp;
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
>>>>>>> 44f12f5fe33416318fce6f082eb53b6155275585
}
