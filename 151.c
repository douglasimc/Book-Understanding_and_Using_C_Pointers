#include <stdio.h>

int main(void) {
    int buffer[20];
    int *pbuffer = buffer;
    for(int i=0; i<sizeof(buffer); i++) { // sizeof returns 80 = 20 * 4
        *(pbuffer++) = 0;
    }

    return 0;
}
