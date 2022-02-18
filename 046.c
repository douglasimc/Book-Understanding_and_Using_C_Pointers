#include <stdio.h>
#include <stdlib.h>

void function2() {
    void *var1;
    int var2;
    printf("Program Stack Example\n");
}
void function1() {
    void *var3;
    function2();
}
int main() {
    int var4;
    function1();
}
