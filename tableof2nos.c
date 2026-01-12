#include <stdio.h>
int table(int arr[][10], int num, int row, int col);

int main()
{
    int a, b, col1, col2, arr[2][10];
    printf("Enter number whose table to be found and limit: ");
    scanf("%d %d", &a, &col1);
    printf("Enter another number whose table to be found and limit: ");
    scanf("%d %d", &b, &col2);
    table(arr, a, 0, col1);
    table(arr, b, 1, col2);
    for (int i = 0; i < col1; i++)
        printf("%d ", arr[0][i]);
    printf("\n");
    for (int i = 0; i < col2; i++)
        printf("%d ", arr[1][i]);
}
int table(int arr[][10], int num, int row, int col)
{
    for (int i = 1; i <= col; i++)
    {
        arr[row][i - 1] = num * i;
    }
}