#include <stdio.h>

int getSystemStatus() {
    int status;
    //...
    status = 0;
    //...
    return status;
}

int main() {
    if (getSystemStatus == 0) { // comparate function address with 0
        printf("Status is 0\n");
    } else {
        printf("Status is not 0\n");
    }

    return 0;
}
