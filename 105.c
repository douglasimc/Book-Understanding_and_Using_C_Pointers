#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t stringLength(char* string){
    size_t length = 0;
    while(*(string++)) {
        length++;
    }
    return length;
}

int main() {
    char simpleArray[] = "simple string";
    char *simplePtr = (char*)malloc(strlen("simple string")+1);
    strcpy(simplePtr, "simple string");

    printf("%d\n",stringLength(simplePtr));
    printf("%d\n",stringLength(simpleArray));
    printf("%d\n",stringLength(&simpleArray));
    printf("%d\n",stringLength(&simpleArray[0]));

    return 0;
}
