#include <stdio.h>
#include <stdlib.h>

char* staticFormat(const char* name, size_t quantity, size_t weight) {
    static char buffer[64]; //Assume to be larger enough
    sprintf(buffer, "Item: %s Quantity: %u Weight: %u",
            name, quantity, weight);
    return buffer;
}

int main() {
    char* part1 = staticFormat("Axle",25,45);
    char* part2 = staticFormat("Piston",55,5);
    printf("%s\n",part1);
    printf("%s\n",part2);

    return 0;
}
