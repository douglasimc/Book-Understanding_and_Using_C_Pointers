#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // Requerida para intptr_t e uintptr_t

int main()
{
    int vector[] = {28, 41, 7};
    int *pi = vector;

    printf("%d\n",*pi); // display 28
    pi += 1;
    printf("%d\n",*pi); // display 41
    pi += 1;
    printf("%d\n",*pi); // display 7

    system("PAUSE");
    return 0;
}
