#include <stdio.h>

int main() {
    int (*fptrIndirect)(const char *) = printf;
    fptrIndirect("Executing printf indirectly");

    return 0;
}
