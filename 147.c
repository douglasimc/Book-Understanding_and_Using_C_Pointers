#include <stdio.h>

int main(void) {
    int num;
    int *pi;
    *pi = &num; // pi not initialized

    return 0;
}
