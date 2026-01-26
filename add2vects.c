#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
} vect;
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}
int main()
{
    struct vector v1 = {10, 2};
    struct vector v2 = {8, 5};
    vect v3 = sumVector(v1, v2);
    printf("Sum of vectors %di + %dj", v3.i, v3.j);
    return 0;
}