#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char *pageHeaders[300];
    pageHeaders[12] = "Amorphous Compounds";
    pageHeaders[13] = pageHeaders[12];


    printf("pageHeaders[12]: %p\n", pageHeaders[12]);
    printf("pageHeaders[13]: %p\n", pageHeaders[13]);
    printf("Amorphous Compounds: %p\n", "Amorphous Compounds");
    printf("Amorphous Compounds: %p\n", "Amorphous Compounds!");

    return 0;
}
