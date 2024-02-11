#include <stdio.h>
#define MAX 25

//Multiplacation
void mtxMult(int rows,int cols,int A[MAX][MAX], int B[MAX][MAX]) {
    int C[MAX][MAX]; /* Resultant Matrix */
    int i, j, k;
    printf("Resultant Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            C[i][j] = 0;
            for (k = 0; k < cols; k++)
            C[i][j] += A[i][k] * B[k][j];
            printf("%d\t", C[i][j]);
            }
        printf("\n");
        }
}

int main(void){
     int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
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
    mtxMult(rows, cols, mat1 ,mat2);
}