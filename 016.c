#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[]= {28, 41, 7};
    int *pi = vector+2;

    printf("%d\n",*(pi--));
    //pi--;
    printf("%d\n",*pi);
    pi--;
    printf("%d\n",*pi);

    system("PAUSE");
    return 0;
}
