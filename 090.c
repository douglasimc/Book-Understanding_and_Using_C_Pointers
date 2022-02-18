#include <stdio.h>
#include <stdlib.h>

int main() {
    char *tabHeader = "Sound"; // not recommended
    //const char *tabHeader = "Sound";
    *tabHeader = 'L';
    printf("$s\n",tabHeader); // Display Lound
    return 0;
}
