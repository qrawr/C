#include <stdio.h>
#define SIZE 3

void inputMatrix(int matrix[SIZE][SIZE]);
void printMatrix(int matrix[SIZE][SIZE]);
void checkSymmetry(int matrix[SIZE][SIZE]);

int main() {
    int matrix[SIZE][SIZE];

    inputMatrix(matrix);
    printMatrix(matrix);
    checkSymmetry(matrix);

    return 0;
}

void inputMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    printf("\nMatrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void checkSymmetry(int matrix[SIZE][SIZE]) {
    int symmetric = 1; 

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }
    
    if (symmetric)
        printf("\n? The matrix is Symmetric.\n");
    else
        printf("\n? The matrix is Asymmetric.\n");
}

