#include <stdio.h>

int main() {
    int (*fptrCompute)(int,int);
    int add(int n1, int n2, int n3) {
        return n1+n2+n3;
    }
    fptrCompute = add;
    printf("%d\n",fptrCompute(2,5)); // output inderterminate


    return 0;
}
