#include <stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int matrix[ROWS][COLS], int result[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
    printf("Transposed Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int transposedMatrix[COLS][ROWS];
    
    transpose(matrix, transposedMatrix);
    
    displayMatrix(transposedMatrix);
    
    return 0;
}
