#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n)
{
    int i, chk = 1;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            chk = 0;
            break;
        }
    }
    return chk;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}