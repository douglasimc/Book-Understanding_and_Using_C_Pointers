#include <stdio.h>
#include <string.h>

int main(void) {

    char firstName[8];
    int result;
    result = strcpy_s(firstName,sizeof(firstName),"Alexander"); // Only on Microsoft Visual C++

    return 0;
}
