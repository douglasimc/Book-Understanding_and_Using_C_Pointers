#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[]= {28, 41, 7};
    int *p0 = vector;
    int *p1 = vector+1;
    int *p2 = vector+2;

    printf("p2>p0: %d\n",p2>p0); // p2-p1 : 1
    printf("p2<p1: %d\n",p2<p1); // p2-p1 : 0
    printf("p0>p1: %d\n",p0>p1); // p2-p1 : 0

    system("PAUSE");
    return 0;
}
