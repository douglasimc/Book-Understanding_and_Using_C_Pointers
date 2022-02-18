#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *pc = (char*) malloc(6);
    int i;
    //for(i=0; i<8; i++) {
    for(i=0; i<6; i++) {
        //*pc[i] = 0;
        *(pc+i) = '0';
    }

    system("PAUSE");
    return 0;
}
