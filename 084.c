#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2;
    int columns = 5;

    int **matrix = (int **) malloc(rows * sizeof (int *));
    matrix[0] = (int *) malloc(rows * columns * sizeof(int));
    for (int i = 1; i < rows; i++)
        matrix[i] = matrix[0] + i * columns;

    matrix[0][2] = 3;

    printf("%d ", matrix[0][2]);

    return 0;
}
