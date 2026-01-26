#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
int main()
{
    int n = 5;
    int ans = sum(n);
    printf("Sum of %d natural numbers is %d", n, ans);
    return 0;
}