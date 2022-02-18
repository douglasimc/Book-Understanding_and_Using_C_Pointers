#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int limit = 500;
    int *const cpi1 = &limit;

    int num;
    int age;
    int *const cpi2 = &num;
    //cpi2 = &age; // 'cpi' : you cannot assign to a variable that is const

    num=5;

    printf("%d\n", *cpi2);

    age=10;

    printf("%d\n", *cpi1);

    *cpi1 = age;
    printf("%d\n", *cpi1);

    system("PAUSE");
    return 0;
}
