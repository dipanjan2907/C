#include <stdio.h>
void swap1(int a, int b);
void swap2(int *a, int *b);

int main()
{
    int x = 5, y = 9;
    swap1(x, y);
    printf("Call by Value (main): x= %d y= %d\n", x, y);
    swap2(&x, &y);
    printf("Call by Reference (main): x= %d y= %d\n", x, y);
}

// Call by Value
void swap1(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("Call by Value (function): x= %d y= %d\n", a, b);
}

// Call by Reference
void swap2(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}