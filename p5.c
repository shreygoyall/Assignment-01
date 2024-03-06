#include <stdio.h>

int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int isUpperTriangular = 1;
    for (int i = 1; i < rows; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (matrix[i][j] != 0) 
            {
                isUpperTriangular = 0;
                break;
            }
        }
        if (!isUpperTriangular) 
        {
            break;
        }
    }
    
    if (isUpperTriangular) 
    {
        printf("The given matrix is an upper triangular matrix.\n");
    } 
    else 
    {
        printf("The given matrix is not an upper triangular matrix.\n");
    }
    
    return 0;
}