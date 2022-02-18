#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int size, int value)
{
    int arr[size];
    for(int i=0; i<size; i++)
    {
        arr[i] = value;
    }
    return arr;
}


int main() {
    int* vector = allocateArray(5,45);
    for(int i=0; i<5; i++) {
        printf("%d\n", vector[i]);
    }
    return 0;
}
