#include <stdio.h>

int getSystemStatus() {
    int status;
    //...
    status = 0;
    //...
    return status;
}

int main() {
    if (getSystemStatus()) { // any nonzero value as true
        printf("Status is not 0\n");
    } else {
        printf("Status is 0\n");
    }

    return 0;
}
