// Q.6  WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 

#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols], const char *name) 
{
    printf("Enter elements of %s matrix:\n", name);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[rows][cols], const char *operation) 
{
    printf("\nResult of %s:\n", operation);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrix(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrix(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]) 
{
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void main() 
{
    int rows, cols;

    printf("Enter the number of rows and columns for addition and subtraction: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    inputMatrix(rows, cols, matrix1, "first");
    inputMatrix(rows, cols, matrix2, "second");

    addMatrix(rows, cols, matrix1, matrix2, result);
    displayMatrix(rows, cols, result, "Addition");

    subtractMatrix(rows, cols, matrix1, matrix2, result);
    displayMatrix(rows, cols, result, "Subtraction");

    int rows1, cols1, rows2, cols2;
    printf("\nEnter the number of rows and columns for the first matrix (Multiplication): ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns for the second matrix (Multiplication): ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) 
    {
        printf("Matrix multiplication is not possible with the given dimensions.\n");
    }

    int matrix3[rows1][cols1], matrix4[rows2][cols2], resultMul[rows1][cols2];

    inputMatrix(rows1, cols1, matrix3, "first (Multiplication)");
    inputMatrix(rows2, cols2, matrix4, "second (Multiplication)");

    multiplyMatrix(rows1, cols1, matrix3, rows2, cols2, matrix4, resultMul);
    displayMatrix(rows1, cols2, resultMul, "Multiplication");
}
