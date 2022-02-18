#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* arr[5];
    for(int i=0; i<5; i++) {
        arr[i] = (int*)malloc(sizeof(int));
        //*(arr+i) = (int*)malloc(sizeof(int)); // Same as above
        //*arr[i] = i;
        **(arr+i) = i; // Same as above
    }
    return 0;
}
