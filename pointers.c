#include <stdio.h>
int main()
{
    int a = 3;
    printf("a= %d\n", a);
    int *adr;
    adr = &a;
    *adr = 5;
    printf("address of a= %d\nupdated value of a= %d\n", adr, a);
    int b = 5;
    printf("value of b using *&= %d", *(&b));
}