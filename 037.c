#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int num;
    int *pi = &num;
    free(pi); // Undefined behavior
    system("PAUSE");
    return 0;
}
