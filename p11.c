#include <stdio.h>
#define MAX_SIZE 100

int isSymmetric(int mat[][MAX_SIZE], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (mat[i][j] != mat[j][i]) 
            {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() 
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isSymmetric(matrix, n)) 
    {
        printf("The matrix is symmetric.\n");
    } 
    else 
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}