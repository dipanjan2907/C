#include <stdio.h>

void hanoi(int n, int st, int end)
{
    if (n == 0)
        return;
    int other = 6 - (st + end);
    hanoi(n - 1, st, other);
    printf("Disk %d moved from %d to %d\n", n, st, end);
    hanoi(n - 1, other, end);
}
int main()
{
    int n;
    printf("Enter number of disks\n: ");
    scanf("%d", &n);
    hanoi(n, 1, 3);
    return 0;
}
