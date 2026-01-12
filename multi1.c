#include <stdio.h>
#include <math.h>

void periRect()
{
    int a, b;
    printf("Enter sides of rect: ");
    scanf("%d %d", &a, &b);
    printf("Perimeter of Rectangle: %d\n", 2 * (a + b));
}

void chkDigit()
{
    char c;
    printf("Enter digit: ");
    scanf("%c", &c);
    if (c >= '0' && c <= '9')
        printf("Digit\n");
    else
        printf("NOT DIGIT\n");
}
void pointerGrt()
{
    int a, b;
    printf("Enter 2 nos: ");
    scanf("%d %d", &a, &b);
    int *ptra = &a, *ptrb = &b;
    if (*ptra > *ptrb)
        printf("Greatest: %d", *ptra);
    else if (*ptra < *ptrb)
        printf("Greatest: %d", *ptrb);
    else
        printf("EQUAL");
}
int main()
{
    // pointerGrt();
    // chkDigit();
    // periRect();
    return 0;
}