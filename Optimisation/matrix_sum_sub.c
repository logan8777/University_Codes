#include<stdio.h>
#define max 25
//Addition
void mtxAdd(int rows,int cols,int mat1[max][max],int mat2[max][max],int result[max][max]) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

//Subtraction
void mtxSub(int rows, int cols, int mat1[max][max], int mat2[max][max], int result[max][max]) 
{
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

int main(void) 
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int mat1[max][max],mat2[max][max],res_sum[max][max], res_diff[max][max];
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    mtxAdd(rows, cols, mat1, mat2, res_sum);
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", res_sum[i][j]);
        }
        printf("\n");
    }
    mtxSub(rows, cols, mat1, mat2, res_diff);
    printf("Resultant matrix after subtraction:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", res_diff[i][j]);
        }
        printf("\n");
    }
}