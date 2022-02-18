#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int const NUMBER_OF_DOUBLES = 10;
    //double *pd = (double*)malloc(NUMBER_OF_DOUBLES); // only 10 bytes
    double *pd = (double*)malloc(NUMBER_OF_DOUBLES * sizeof(double));

    system("PAUSE");
    return 0;
}
