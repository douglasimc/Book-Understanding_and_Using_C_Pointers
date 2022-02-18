#include <stdio.h>

int (*fptrCompute)(int,int);
int addNumbers(int n1, int n2, int n3) {
    return n1+n2+n3;
}

int main() {

    fptrCompute = addNumbers;

    printf("%d\n",fptrCompute(3,4)); // n3 with garbage memmory

    return 0;
}
