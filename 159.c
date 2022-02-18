#include <stdio.h>

typedef struct _item {
    int partNumber;
    int quantity;
    int binNumber;
}Item;

int main() {
    Item part = {12345, 35, 107};
    int *pi = &part.partNumber;
    printf("Part number: %d\n",*pi);
    pi++; // not recommended
    printf("Quantity: %d\n",*pi);
    pi++; // not recommended
    printf("Bin number: %d\n",*pi);

    return 0;
}
