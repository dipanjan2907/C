#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, isPrime = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            s break;
        }
    }
    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");
}