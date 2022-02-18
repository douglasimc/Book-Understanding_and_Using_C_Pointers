#include <stdio.h>
#include <stdlib.h>

int *globalpi;

void foo() {
 static int *staticpi;
    if (staticpi) {
        printf("not NULL\n");
    }
    else {
        printf("NULL\n");
    }

}

int main()
{

    if (globalpi) {
        printf("not NULL\n");
    }
    else {
        printf("NULL\n");
    }

    foo();

 system("PAUSE");
 return 0;
}
