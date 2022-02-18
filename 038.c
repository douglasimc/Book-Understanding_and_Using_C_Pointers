#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int *pi = (int *) malloc(sizeof(int));
    free(pi);
    pi = NULL;
    system("PAUSE");
    return 0;
}
