#include <stdio.h>
#include <stdlib.h>

void passingAddressOfConstants(const int* num1, int* num2)
{
    *num2 = *num1;
}

int main() {
    const int limit = 100;
    int result = 5;
    printf("limit=%d\tresult=%d\n",limit,result);
    passingAddressOfConstants(&limit,&result);
    printf("limit=%d\tresult=%d\n",limit,result);
    return 0;
}
