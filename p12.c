#include <stdio.h>
#define MAX_SIZE 10

int isSkewSymmetric(int matrix[][MAX_SIZE], int n) 
{
    int i, j;
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(matrix[i][j] != -matrix[j][i]) 
            {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() 
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, i, j;

    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if(isSkewSymmetric(matrix, n)) 
    {
        printf("The matrix is skew-symmetric.\n");
    } 
    else 
    {
        printf("The matrix is not skew-symmetric.\n");
    }

    return 0;
}