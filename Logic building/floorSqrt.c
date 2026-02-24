#include <stdio.h>

int floorSqrt(int n)
{
    int l = 1, h = n, res = 1, mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (mid * mid <= n)
        {
            res = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    return res;
}
int main()
{
    int n, res;
    printf("Enter number: ");
    scanf("%d", &n);
    res = floorSqrt(n);
    printf("Floor Square Root = %d\n", res);
    return 0;
}