#include <stdio.h>

int main(void)
{
    FILE *fptr;
    fptr = fopen("table.txt", "w");
    int num = 7;
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d", num * i);
        fprintf(fptr, "%c", '\n');
    }
    printf("File edited successfully! \n");

    return 0;
}
