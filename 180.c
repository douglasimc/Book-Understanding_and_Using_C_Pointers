#include <stdlib.h>
#define PORT 0xB0000000

int main() {

    unsigned int volatile * const port = (unsigned int *) PORT;
    short value;

    *port = 0x0BF4; // write to the port
    value = *port; // read from the port

    return EXIT_SUCCESS;
}
