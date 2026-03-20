// sum of primary and secondary diagonal elements

#include <stdio.h>
int main() 
{
    int n, Sum1=0, Sum2=0;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix: ");
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i=0; i<n; i++) 
    {
        Sum1 += matrix[i][i];           
        Sum2 += matrix[i][n-1-i]; 
    }
    printf("Sum of primary diagonal elements is= %d\n", Sum1);
    printf("Sum of secondary diagonal elements is= %d\n", Sum2);

    return 0;
}
