#include <stdio.h>

int main() 
{
    int rows, cols, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    
    printf("Enter the elements of the array:\n");
    
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) 
    {
        int rowSum = 0;
        for (j = 0; j < cols; j++) 
        {
            rowSum += arr[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }
    
    printf("Sum of each column:\n");
    for (j = 0; j < cols; j++)
    {
        int colSum = 0;
        for (i = 0; i < rows; i++) 
        {
            colSum += arr[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }
    
    return 0;
}