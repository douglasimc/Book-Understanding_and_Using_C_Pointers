#include <stdlib.h>
#include <stdio.h>

typedef union _conversion {
    float fNum;
    unsigned int uiNum;
} Conversion;

int isPositive1(float number) {
    Conversion conversion = { .fNum =number};
    return (conversion.uiNum & 0x80000000) == 0;
}

int main() {

    printf("Result 1: %d\n", isPositive1(-3.45));
    printf("Result 2: %d\n", isPositive1(3.45));

    return EXIT_SUCCESS;
}
