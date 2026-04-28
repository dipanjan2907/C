#include <stdio.h>

int digitalRoot(int n)
{
    if (n == 0)
        return 0;
    if (n % 9 == 0)
        return 9;
    return (n % 9);
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int rt = digitalRoot(n);
    printf("Digital Root: %d", rt);
    return 0;
}
