#include <stdio.h>
int isSparse(int row, int col, int arr[row][col])
{
    int c = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            if (arr[i][j] == 0)
                c++;
    }
    int nonZero = (row * col) - c;
    if (c > nonZero)
        return nonZero;
    return 0;
}
void toTriplet(int row, int col, int arr[row][col])
{
    int nonZero = isSparse(row, col, arr);
    if (nonZero)
    {
        int triplet[nonZero + 1][3], ti = 1;
        triplet[0][0] = row;
        triplet[0][1] = col;
        triplet[0][2] = nonZero;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j] != 0)
                {
                    triplet[ti][0] = i;
                    triplet[ti][1] = j;
                    triplet[ti][2] = arr[i][j];
                    ti++;
                }
            }
        }
        printf("\nSparse\nTriplet Form:\n");
        for (int i = 0; i < nonZero + 1; i++)
        {
            for (int j = 0; j < 3; j++)
                printf("%d ", triplet[i][j]);
            printf(" \n");
        }
    }
    else
        printf("Not Sparse \n");
}
int main()
{
    int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element at [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    toTriplet(row, col, arr);
    return 0;
}