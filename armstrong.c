#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int digiCount = (n == 0) ? 1 : (int)log10(n) + 1;
    int n1 = n;
    int sum = 0;
    while (n1 > 0)
    {
        sum += (int)round(pow(n1 % 10, digiCount));
        n1 /= 10;
        printf("sum= %d n1= %d\n", sum, n1);
    }
    if (sum == n)
        printf("ARMSTRONG");
    else
        printf("NOT ARMSTRONG");
}