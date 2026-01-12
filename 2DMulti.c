#include <stdio.h>
int main()
{
    int rows1, columns1, rows2, columns2;
    printf("Rows for arr1= ");
    scanf("%d", &rows1);
    printf("Columns for arr1= ");
    scanf("%d", &columns1);
    printf("Rows for arr2= ");
    scanf("%d", &rows2);
    printf("Columns for arr2= ");
    scanf("%d", &columns2);
    if (columns1 == rows2)
    {
        int arr1[rows1][columns1];
        int arr2[rows2][columns2];
        int prd[rows1][columns2];
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                printf("Enter element at arr1[%d][%d]= ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                printf("Enter element at arr2[%d][%d]= ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                prd[i][j] = 0;
                for (int k = 0; k < columns1; k++)
                {
                    prd[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                printf("%d\t", prd[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Column of 1st Matrix must be equal to ROw of 2nd Matrix for multiplication.");
    return 0;
}