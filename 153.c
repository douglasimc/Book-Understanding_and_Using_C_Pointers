#include <stdio.h>

int main(void) {
    int num = 2147483647;
    int *pi = &num;
    short *ps = (short*)pi;
    printf("pi: %p  Value(16): %x  Value(10): %d\n", pi, *pi, *pi);
    printf("pi: %p  Value(16): %hx  Value(10): %hd\n", pi, (short)*pi, (short)*pi);
    return 0;
}
