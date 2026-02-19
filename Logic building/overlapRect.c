#include <stdio.h>
struct Point
{
    int x, y;
};
int overlap(struct Point l1, struct Point r1, struct Point l2, struct Point r2)
{
    if (l1.x > r2.x || l2.x > r1.x)
        return 0;
    if (l1.y < r2.y || l2.y < r1.y)
        return 0;

    return 1; // DO NOT OVERLAP
}
int main()
{
    struct Point l1, l2, r1, r2; // l1= {0, 10}, r1 = {10, 0}; l2= {5, 5}, r2 = {15, 0};
    printf("Rect 1 - top-left (x y): ");
    scanf("%d %d", &l1.x, &l1.y);

    printf("Rect 1 - bottom-right (x y): ");
    scanf("%d %d", &r1.x, &r1.y);

    printf("Rect 2 - top-left (x y): ");
    scanf("%d %d", &l2.x, &l2.y);

    printf("Rect 2 - bottom-right (x y): ");
    scanf("%d %d", &r2.x, &r2.y);

    if (overlap(l1, r1, l2, r2))
        printf("Rectangles Overlap");
    else
        printf("Rectangles DO NOT Overlap");
    return 0;
}
