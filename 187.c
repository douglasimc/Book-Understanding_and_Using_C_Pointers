#include <stdlib.h>
#include <stdio.h>

int isPositive3(float number) {
    unsigned int *ptrValue = (unsigned int *) &number;
    return (*ptrValue & 0x80000000) == 0;
}

int main() {

    printf("Result 1: %d\n", isPositive3(-3.45));
    printf("Result 2: %d\n", isPositive3(3.45));

    return EXIT_SUCCESS;
}
