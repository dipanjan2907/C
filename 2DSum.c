#include <stdio.h>
int main()
{
    int rows1, columns1;
    printf("Rows for arr1= ");
    scanf("%d", &rows1);
    printf("Columns for arr1= ");
    scanf("%d", &columns1);
    int arr1[rows1][columns1];
    int arr2[rows1][columns1];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            printf("\nEnter element at arr1[%d][%d]= ", i, j);
            scanf("%d", &arr1[i][j]);
            printf("Enter element at arr2[%d][%d]= ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum[rows1][columns1];
    printf("Sum of two Arrays=\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}