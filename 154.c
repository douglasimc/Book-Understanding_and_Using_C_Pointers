#include <stdio.h>

int main(void) {
    short a3 = 3;
    short a2 = 2;
    short a1 = 1;
    short a0 = 0;
    short a_1 = -1;
    short a_2 = -2;
    short a_3 = -3;

    int b3 = 3;
    int b2 = 2;
    int b1 = 1;
    int b0 = 0;
    int b_1 = -1;
    int b_2 = -2;
    int b_3 = -3;

    printf("a3: %p  Value(16): %hx  Value(10): %hd\n", &a3, a3, a3);
    printf("a2: %p  Value(16): %hx  Value(10): %hd\n", &a2, a2, a2);
    printf("a1: %p  Value(16): %hx  Value(10): %hd\n", &a1, a1, a1);
    printf("a0: %p  Value(16): %hx  Value(10): %hd\n", &a0, a0, a0);
    printf("a_1: %p  Value(16): %hx  Value(10): %hd\n", &a_1, a_1, a_1);
    printf("a_2: %p  Value(16): %hx  Value(10): %hd\n", &a_2, a_2, a_2);
    printf("a_3: %p  Value(16): %hx  Value(10): %hd\n", &a_3, a_3, a_3);

    printf("b3: %p  Value(16): %x  Value(10): %d\n", &b3, b3, b3);
    printf("b2: %p  Value(16): %x  Value(10): %d\n", &b2, b2, b2);
    printf("b1: %p  Value(16): %x  Value(10): %d\n", &b1, b1, b1);
    printf("b0: %p  Value(16): %x  Value(10): %d\n", &b0, b0, b0);
    printf("b_1: %p  Value(16): %x  Value(10): %d\n", &b_1, b_1, b_1);
    printf("b_2: %p  Value(16): %x  Value(10): %d\n", &b_2, b_2, b_2);
    printf("b_3: %p  Value(16): %x  Value(10): %d\n", &b_3, b_3, b_3);

    return 0;
}
