#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int *pi;

    void foo(){
        int tmp = 5;
        pi = &tmp;
    }
    // pi is now a dangling pointer
    foo();
    printf("*pi: %d\n", *pi); // Dangling pointer

    system("PAUSE");
    return 0;
}
