#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char *name = (char*)malloc(strlen("Douglas")+1);
    strcpy(name,"Douglas");
    printf("%s\n",name);
    free(name);
    printf("name free\n");
    free(name);
    return 0;
}
