#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* format(char *buffer, size_t size,
        const char* name, size_t quantity, size_t weight) {
              snprintf(buffer, size, "Item: %s Quantity: %u Weight: %u",
                       name, quantity, weight);
                       return buffer;
}

int main() {
    char buffer[45];
    printf("%s\n",format(buffer,sizeof(buffer),"Axle",25,45));
    return 0;
}
