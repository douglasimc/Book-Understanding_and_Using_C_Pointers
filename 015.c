#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    void *pv = &num;
    printf("%p\n",pv);
    pv = pv+1; //Syntax warning // Não ocorre no mingw32-gcc

    system("PAUSE");
    return 0;
}
