#include <stdlib.h>
#include <stdio.h>

typedef union _conversion2 {
    float *fNum;
    unsigned int *uiNum;
} Conversion2;

int isPositive2(float number) {
    Conversion2 conversion;
    conversion.fNum = &number;
    return (*conversion.uiNum & 0x80000000) == 0;
}

int main() {

    printf("Result 1: %d\n", isPositive2(-3.45));
    printf("Result 2: %d\n", isPositive2(3.45));

    return EXIT_SUCCESS;
}
