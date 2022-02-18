#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float *vector = malloc(20 * sizeof(float));
    if(vector == NULL) {
        printf("Vector not allocated!\n");
    } else {
        printf("Vector allocated!\n");
    }

    return 0;
}
