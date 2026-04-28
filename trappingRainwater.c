#include <stdio.h>
int trappingRainwater(int h[], int size)
{
    int left = 0, right = size - 1, water = 0;
    int leftMax = h[0], rightMax = h[right];
    while (left < right)
    {
        if (leftMax <= rightMax)
        {
            left += 1;
            leftMax = h[left] > leftMax ? h[left] : leftMax;
            water += leftMax - h[left];
        }
        else
        {
            right -= 1;
            rightMax = h[right] > rightMax ? h[right] : rightMax;
            water += rightMax - h[right];
        }
    }
    return water;
}
int main(void)
{
    int heights[6] = {4, 2, 0, 3, 2, 5};
    int water = trappingRainwater(heights, 6);
    printf("Total Rainwater Trapped = %d\n", water);
    return 0;
}
