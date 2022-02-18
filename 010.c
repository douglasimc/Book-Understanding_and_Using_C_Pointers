#include <stdio.h>
#include <stdlib.h>

int main()
{

 size_t sizet = -5;
 printf("%d\n",sizet);
 // printf("%zu\n",sizet); // não funciona no mingw32-gcc
 printf("%lu\n",sizet);

 sizet = 5;
 printf("%d\n",sizet);
 // printf("%zu\n",sizet); // não funciona no mingw32-gcc
 printf("%lu\n",sizet);


 system("PAUSE");
 return 0;
}
