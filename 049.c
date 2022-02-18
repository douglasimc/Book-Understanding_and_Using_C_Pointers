#include <stdio.h>
#include <stdlib.h>

void swapWithPointers(int num1, int num2)
{
    int tmp;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main() {
    int n1 = 5;
    int n2 = 10;
    printf("n1=%d\tn2=%d\n",n1,n2);
    swapWithPointers(n1, n2);
    printf("n1=%d\tn2=%d\n",n1,n2);
    return 0;
}
