#include <stdio.h>
#include <stdlib.h>
int findClosestandDivisible(int m, int n)
{
    int q = n / m;
    int n1 = q * m;
    int n2 = (m * n > 0) ? m * (q + 1) : m * (q - 1);
    if (abs(n - n1) > abs(n - n2))
        return n2;
    return n1;
}
int main(void)
{
    int m, n;
    printf("Enter number n: ");
    scanf("%d", &n);
    printf("\nEnter number (divisible by) m: ");
    scanf("%d", &m);
    if (m == 0)
        return 0;
    int ans = findClosestandDivisible(m, n);
    printf("Closest number to %d divisible by %d is: %d\n", n, m, ans);
    return 0;
}
