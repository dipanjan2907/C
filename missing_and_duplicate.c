// Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

#include <stdio.h>
void findTwoElement(int arr[], int n)
{
    int dup, miss;
    long long expSum, expSumSq, actSum = 0, actSumSq = 0;
    for (int i = 0; i < n; i++)
    {
        actSum += arr[i];
        actSumSq += (long long)(arr[i] * arr[i]);
    }
    expSum = (long long)n * (n + 1) / 2;
    expSumSq = (long long)n * (n + 1) * (2 * n + 1) / 6;

    // diff1=dup-miss
    // diff2=dup^2-miss^2
    // s1=diff2/diff1=dup+miss
    int diff1 = actSum - expSum;
    int diff2 = actSumSq - expSumSq;
    int s1 = diff2 / diff1;

    dup = (diff1 + s1) / 2;
    miss = s1 - dup;
    printf(" Repeating number is %d and the missing number is %d.", dup, miss);
}
int main()
{
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    findTwoElement(arr, n);
}