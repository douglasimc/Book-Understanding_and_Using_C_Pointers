#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pv = (int*) malloc(5 * sizeof(int));
    for(int i=0; i<5; i++)
    {
        pv[i] = i+1;
        //*(pv+i) = i+1;
    }

    return 0;
}

