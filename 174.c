#include <stdio.h>

int getSystemStatus() {
    int status;
    //...
    status = 0;
    //...
    return status;
}


int main() {

    if (getSystemStatus) {
        printf("Test for -Wall");
    }

    return 0;
}
