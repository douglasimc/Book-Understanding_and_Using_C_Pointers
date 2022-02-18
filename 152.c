#include <stdio.h>

int main(void) {
    int buffer[20];
    int *pbuffer = buffer;
    for(int i=0; i<sizeof(buffer)/sizeof(int); i++) {
        *(pbuffer++) = 0;
    }

    return 0;
}
