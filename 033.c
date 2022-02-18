#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //static int *pi = malloc(sizeof(int));
    static int *pi;
    pi = malloc(sizeof(int));

    system("PAUSE");
    return 0;
}
