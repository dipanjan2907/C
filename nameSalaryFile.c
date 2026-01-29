#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    int sal;
    FILE *fptr;

    fptr = fopen("employee.txt", "w");

    if (fptr == NULL)
    {
        printf("File could not be opened!");
        return 1;
    }

    for (int i = 1; i <= 2; i++)
    {
        printf("Enter name of employee: ");
        scanf("%s", name);

        printf("Enter salary of %s: ", name);
        scanf("%d", &sal);

        fprintf(fptr, "%s, %d\n", name, sal);
    }

    fclose(fptr);

    printf("DETAILS ENTERED INTO FILE SUCCESSFULLY!");
    return 0;
}
