#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t stringLength(char* string){
    size_t length = 0;
    *(string+3) = 'y';
    while(*(string)) {
        length++;
        string = string + 1;
    }
    return length;
}

int main() {
    char simpleArray[] = "Iuri";

    printf("%s\n",simpleArray);
    printf("%c\n",*(simpleArray));
    printf("%d\n",*(simpleArray+4));
    printf("%d\n",stringLength(simpleArray));
    printf("%s\n",simpleArray);

    return 0;
}
