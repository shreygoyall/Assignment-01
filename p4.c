#include <stdio.h>

int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isDiagonal = 1;
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            if(i != j && matrix[i][j] != 0) 
            {
                isDiagonal = 0;
                break;
            }
        }
    }

    if(isDiagonal) 
    {
        printf("The given matrix is a diagonal matrix.\n");
    } 
    else 
    {
        printf("The given matrix is not a diagonal matrix.\n");
    }

    return 0;
}