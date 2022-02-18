#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *pi = (int *) malloc(sizeof(int));
    *pi = 5;

    pi = (int *) malloc(sizeof(int));

    system("PAUSE");
    return 0;
}
