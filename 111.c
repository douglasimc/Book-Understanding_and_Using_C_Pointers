#include <stdio.h>
#include <stdlib.h>


//int main(int argc, char** argv) {
int main(int argc, char* argv[]) {
    for(int i=0; i<argc; i++) {
        printf("argv[%d] %s",i,argv[i]);
    }
    return 0;
}
