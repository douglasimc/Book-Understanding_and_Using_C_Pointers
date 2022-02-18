#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // Requerida para intptr_t e uintptr_t

int main()
{
    short s;
    short *ps = &s;
    char c;
    char *pc = &c;

    printf("Content of ps before: %d\n",ps);
    ps = ps + 1;
    printf("Content of ps after: %d\n",ps);
    printf("Content of pc before: %d\n",pc);
    pc = pc + 1;
    printf("Content of pc after: %d\n",pc);

    /* Um ponteiro pode chegar ao outro endereço pela memória */

    system("PAUSE");
    return 0;
}
