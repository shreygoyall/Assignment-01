#include <stdio.h>
#define MAX_SIZE 100

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

    int symmetric = 1; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) 
        {
            break;
        }
    }

    if (symmetric) 
    {
        printf("The matrix is symmetric.\n");
    } 
    else 
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}