#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    char name[20];
    int salary;
} emp;

int main()
{
    emp e1;
    emp *ptr = &e1;
    strcpy(ptr->name, "Unknown");
    (*ptr).salary = 57000;
    printf("Salary of %s is Rs. %d.\n", ptr->name, ptr->salary);

    return 0;
}