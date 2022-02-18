#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5] = {1, 2, 3, 4, 5};
    int *pv = vector;

    pv = pv + 1;
    //vector = vector + 1; // Syntax error
    pv = vector + 1;

    return 0;
}
