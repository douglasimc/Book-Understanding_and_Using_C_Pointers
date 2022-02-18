#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    const int limit = 100;
    int *pi;        // Pointer to an integer
    const int *pci; // Pointer to a constant integer

    pi=&num;
    pci=&limit;

    printf("num - Address: %p value: %d\n",&num, num);
    printf("limit - Address: %p value: %d\n",&limit, limit);
    printf("pi - Address: %p value: %p\n",&pi, pi);
    printf("pci - Address: %p value: %p\n",&pci, pci);

    printf("%d\n", *pci);

    pci = &num;

    //*pci = 200; //you cannot assign to a variable that is const

    printf("%d\n", *pci);

    int *const cpi = &num;
    //int *const cpi = &limit; // generate a warning

    *cpi = limit;
    printf("%d\n", *cpi);
    *cpi = 25;
    printf("%d\n", *cpi);
    //cpi = &limit; // error



    system("PAUSE");
    return 0;
}
