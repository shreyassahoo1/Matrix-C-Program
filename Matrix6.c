// adding two matrices

#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    printf("Enter elements of the first matrix:\n");
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the two matrices is:\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
