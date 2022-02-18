#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* format(char *buffer, size_t size,
        const char* name, size_t quantity, size_t weight) {

              char *formatString = "Item: %s Quantity: %u Weight: %u";
              size_t formatStringLength = strlen(formatString)-6;
              size_t nameLength = strlen(name);
              size_t length = formatStringLength + nameLength +
                       10 + 10 + 1;

              if(buffer == NULL) {
                  buffer = (char*)malloc(length);
                  size = length;
              }
              snprintf(buffer, size, formatString, name, quantity, weight);
              return buffer;
}

int main() {
    printf("%s\n",format(NULL,sizeof(NULL),"Axle",25,45));
    return 0;
}
