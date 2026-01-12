#include <stdio.h>
int main()
{
    int n = 4, max;
    int arr[4] = {3, 5, 9, 7};
    max = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}