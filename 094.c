#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    //char* prefix = '+'; // Illegal

    char* prefix;
    prefix = (char*)malloc(2);
    *prefix = '+';
    *(prefix+1) = 0;

    printf("%s\n", prefix);

    return 0;
}
