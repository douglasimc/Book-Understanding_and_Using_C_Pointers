#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   void exceptionExample(); {
    int *pi = NULL;
    __try {
        pi = (int*)malloc(sizeof(int));
        *pi = 5;
        printf("%d\n",*pi);
    }
    __finally {
        free(pi);
    }
   }
   exceptionExample();
    system("PAUSE");
    return 0;
}
