#include <stdio.h>
#include <stdlib.h>

int main()
{
    int add(int num1, int num2) {
        return num1 + num2;
    }
    int subtract(int num1, int num2) {
        return num1 - num2;
    }

    typedef int (*fptrOperation)(int,int);

    fptrOperation fptr1 = add;

    if(fptr1 == add) {
        printf("fptr1 points to add function\n");
    } else {
        printf("fptr1 does not point to add function\n");
    }


    return 0;
}
