#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5] = {1, 2, 3, 4, 5};
    int *pv;

    pv = vector;

    int value = 3;
    for (int i=0; i<5; i++ ) {
        *pv++ *= value;
        printf("%d\n",*(pv-1));
    }



    return 0;
}
