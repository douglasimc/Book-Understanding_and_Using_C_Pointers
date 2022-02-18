#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int *p1 = (int *) malloc(sizeof(int));
    int *p2 = p1;
    free(p1);
    free(p2);
    system("PAUSE");
    return 0;
}
