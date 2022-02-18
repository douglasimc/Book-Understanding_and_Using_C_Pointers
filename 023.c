#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    const int limit = 100;
    //const int *const cpci = &limit;
    //const int *const cpci;
    const int *const cpci = &num;

    num = 3;

    //cpci = &num; // 'cpci' : you cannot assign to a variable that is const
    //*cpci = 31; // 'cpci' : you cannot assign to a variable that is const
                  // expression must be a modifiable lvalue

    printf("%d\n", *cpci);

    system("PAUSE");
    return 0;
}
