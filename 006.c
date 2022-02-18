#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int *pi=0; // Zero refers to the null pointer,NULL

    printf("%p\n",pi);
    //printf("%d\n",*pi); // result in the program terminating

    pi = &num;
    *pi = 0; // Zero refers to the integer zero

    printf("%d\n",*pi);
    printf("%d\n",num);

    system("PAUSE");
    return 0;
}
