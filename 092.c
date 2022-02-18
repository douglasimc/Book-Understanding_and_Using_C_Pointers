#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //char *header;
    //char *header = (char *) malloc(strlen("Media PLayer")+1);
    char *header = (char *) malloc(13);

    strcpy(header,"Media Player");

    printf("%s\n",header);
    return 0;
}
