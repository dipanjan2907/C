#include <stdio.h>
int main()
{
    int size, search, i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to be searched: ");
    scanf("%d", &search);
    for (i = 0; i < size; i++)
    {
        if (search == arr[i])
        {
            printf("%d found at index %d\n", search, i);
            break;
        }
    }
    if (i == size)
        printf("Not Found.");
    return 0;
}
