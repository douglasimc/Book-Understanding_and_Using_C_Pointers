#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int *pi = (int*) malloc(sizeof(int));
    if(pi != NULL) {
        printf("Pointer should be good\n");
    } else {
        printf("Bad pointer\n");
    }

    system("PAUSE");
    return 0;
}
