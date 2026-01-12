#include <stdio.h>
int add(int, int *);
int main()
{
    int a = 5, b = 10;
    a = add(a, &b);
    printf("%d, %d", a, b);
}
int add(int x, int *y)
{
    x = x + 5;
    *y = *y + 5;
    return x;
}