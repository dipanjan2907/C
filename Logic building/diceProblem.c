#include <stdio.h>
int oppositeFaceOfDice(int n)
{
    if (n > 6 || n < 1)
        return 0;
    return (7 - n);
}
int main()
{
    int n;
    printf("Enter side of dice: ");
    scanf("%d", &n);
    int n1 = oppositeFaceOfDice(n);
    n1 ? printf("Opposite face of dice: %d", n1) : printf("Invalid Side");
    return 0;
}
