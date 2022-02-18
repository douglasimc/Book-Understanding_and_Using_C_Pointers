#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2;
    int columns = 5;

    int *matrix = (int *) malloc(rows * columns * sizeof (int));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            *(matrix + (i*columns) + j) = i*j;
        }
    }

    printf("%d ", *(matrix+5+3));

    return 0;
}
