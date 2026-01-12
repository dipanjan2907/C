#include <stdio.h>
int fibo(int fib[], int n);
int main()
{
    int n;
    printf("Enter number of Fibonacci series terms: ");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d %d ", fib[0], fib[1]);
    fibo(fib, n);
    return 0;
}
int fibo(int fib[], int n)
{
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }
}