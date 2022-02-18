#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int *p1 = (int*) malloc(sizeof(int));
    *p1 = 5;
    int *p2;
    p2 = p1;
    free(p1);
    *p2 = 10;
    printf("*p2: %d\n", *p2); // Dangling pointer
    system("PAUSE");
    return 0;
}
