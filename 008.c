#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int *pi=&num;
    printf("Value of pi: %p\n", pi);
    void *pv = pi;
    pi = (int *)pv;
    printf("Value of pi: %p\n", pi);

    size_t size = sizeof(void*); // Legal ?
    //size_t size = sizeof(void); // Illegal ?
    printf("%p\n", size);

    system("PAUSE");
    return 0;
}
