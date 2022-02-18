#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2;
    int columns = 5;

    int **matrix = (int **) malloc(rows * sizeof (int *));

    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(columns * sizeof(int));
    }

    matrix[0][2] = 3;

    printf("%d ", matrix[0][2]);

    return 0;
}
