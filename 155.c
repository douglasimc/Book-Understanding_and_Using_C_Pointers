#include <stdio.h>

int main(void) {

#define SIZE 32

char name[SIZE];
char *p = name;
if(name != NULL) {
    if(p >= name && p < name+SIZE) {
        // Valid pointer - continue
        printf("Valid!\n");
    } else {
        // Invalid pointer - error condition
        printf("Invalid!\n");
    }
}

    return 0;
}
