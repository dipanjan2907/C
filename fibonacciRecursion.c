#include <stdio.h>

int fibo(int n);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int fibN = fibo(n - 1) + fibo(n - 2);
    return fibN;
}