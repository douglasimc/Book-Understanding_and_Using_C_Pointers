#include <stdio.h>
#include <stdlib.h>

void passingAddressOfConstants(const int* num1, int* num2)
{
    *num1 = 100;
    *num2 = 200;
}

int main() {
    const int limit = 100;
    printf("limit=%d\n",limit);
    passingAddressOfConstants(&limit,&limit);
    printf("limit=%d\n",limit);
    return 0;
}
