#include <stdio.h>
#define MAX_SIZE 100

int main() 
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, i, j, is_skew_symmetric = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(matrix[i][j] != -matrix[j][i]) 
            {
                is_skew_symmetric = 0;
                break;
            }
        }
        if(!is_skew_symmetric) 
        {
            break;
        }
    }

    if(is_skew_symmetric) 
    {
        printf("The matrix is skew-symmetric.\n");
    } 
    else 
    {
        printf("The matrix is not skew-symmetric.\n");
    }

    return 0;
}