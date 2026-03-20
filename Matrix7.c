// traverse matrix 

#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int nonZeroCount=0;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) 
        {
            if(matrix[i][j] != 0) 
            {
                nonZeroCount++;
            }
        }
    }
    printf("Number of non-zero elements in the Matrix are: %d", nonZeroCount);
    return 0;
}
