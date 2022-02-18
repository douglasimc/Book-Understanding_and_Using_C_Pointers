#include <stdlib.h>
#include <stdio.h>

void add(int size, double * restrict arr1, const double * restrict arr2 ) {
    for (int i = 0; i < size; i++) {
        arr1[i] += arr2[i];
    }
}

int main() {
    double vector1[] = {1.1, 2.2, 3.3, 4.4};
    double vector2[] = {1.1, 2.2, 3.3, 4.4};

    add(4,vector1,vector2);

    for (int i=0; i < 4;i++){
        printf("%.1f\t",vector1[i]);
    }
    printf("\n");
    for (int i=0; i < 4;i++){
        printf("%.1f\t",vector2[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
