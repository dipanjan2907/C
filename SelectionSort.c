#include <stdio.h>

int main()
{
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
}
