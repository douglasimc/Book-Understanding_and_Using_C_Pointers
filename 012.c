#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // Requerida para intptr_t e uintptr_t

int main()
{
    int num;
    intptr_t *pi = &num;
    // uintptr_t *pu = &num;
    uintptr_t *pu = (uintptr_t*)&num;

    char c;
    uintptr_t *pc = (uintptr_t*)&c;

    system("PAUSE");
    return 0;
}
