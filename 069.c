#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5] = {1, 2, 3, 4, 5};
    int *pv = vector;

    printf("%p\n",vector);
    printf("%p\n",&vector[0]);

    printf("%d\n",*(pv + 0));
    printf("%d\n",*(vector +0));

    return 0;
}
