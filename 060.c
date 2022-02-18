#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (*fptr1)(int);
    int square(int num) {
            return num*num;
            }
    int n = 5;
    fptr1 = square;
    //fptr1 = &square; // some declaration
    printf("%d squared is %d",n, fptr1(n));


    typedef int (*funcptr)(int);

    printf("\n");

    funcptr fptr2;
    fptr2 = square;
    printf("%d squared is %d",n, fptr2(n));
    return (EXIT_SUCCESS);
}
