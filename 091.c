#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char header[] = "Media Player";
    char header1[13];
    strcpy(header1,"Media Player");
    //char header2[]; // Need to initialize here
    //header2 = "Media Player";

    printf("%s\n",header);
    printf("%s\n",header1);
    return 0;
}
