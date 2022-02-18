#include <stdio.h>

int main(void) {
    int *pi = NULL;

    if(pi==NULL) {
        printf("Pi not found!\n");
    } else {
        printf("%d\n",*pi);
    }

    return 0;
}
