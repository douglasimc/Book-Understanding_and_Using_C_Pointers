#include <stdio.h>

int main() {

    int num;
    int *pi;
    pi = &num;
    printf("Before: %p\n",pi);
    int tmp = (int)pi;
    pi = (int*)tmp;
    printf("After: %p\n",pi);
    return 0;
}
