#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int *pi;

    pi = 0;
    pi = NULL;
    //pi = 100;
    //pi = num;

    //pi=&num;

    if (pi) {
        printf("not NULL\n");
    }
    else {
        printf("NULL\n");
    }



    system("PAUSE");
    return 0;
}
