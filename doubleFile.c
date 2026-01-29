#include <stdio.h>
#include <limits.h>
int main(void)
{
    FILE *fptr;
    int n;

    fptr = fopen("int.txt", "r");
    fscanf(fptr, "%d", &n);
    fclose(fptr);

    fptr = fopen("int.txt", "w");
    fprintf(fptr, "%d", 2 * n);
    fclose(fptr);

    printf("Number in file doubled successfully");
    return 0;
}
