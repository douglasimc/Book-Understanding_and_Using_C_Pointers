#include <stdlib.h>
#include <stdio.h>

int main() {

    int num;
    const int *ptr1 = &num;
    int *ptr2 = &num;
    //int volatile ptr3 = &num; // It`s wrong for the example
    int volatile *ptr3 = &num;

    return EXIT_SUCCESS;
}
