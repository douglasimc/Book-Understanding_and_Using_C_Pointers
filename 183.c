#include <stdlib.h>
#include <stdio.h>

int main() {

    float number = 3.25f;
    unsigned int *ptrValue = (unsigned int *)&number;
    unsigned int result = (*ptrValue & 0x80000000) == 0;

    printf("Result 1: %d\n",result);

    number = -3.25f;
    ptrValue = (unsigned int *)&number;
    result = (*ptrValue & 0x80000000) == 0;

    printf("Result 2: %d\n",result);

    return EXIT_SUCCESS;
}
