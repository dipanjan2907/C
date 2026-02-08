#include <stdio.h>
int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    if (exp % 2 == 0)
        return power(base, exp / 2) * power(base, exp / 2);
    else
        return base * power(base, exp / 2) * power(base, exp / 2);
}
int reverseExponentiation(int n)
{
    int n1 = n, rev = 0;
    while (n1 > 0)
    {
        rev = rev * 10 + (n1 % 10);
        n1 /= 10;
    }
    return power(n, rev);
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int ans = reverseExponentiation(n);
    printf("%d", ans);
    return 0;
}
