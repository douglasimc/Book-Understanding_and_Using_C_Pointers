#include <stdio.h>

typedef struct _item {
    int partNumber;
    int quantity;
    int binNumber;
}Item;

int main() {
    Item part = {12345, 35, 107};
    printf("Part number: %d\n",part.partNumber);
    printf("Quantity: %d\n",part.quantity);
    printf("Bin number: %d\n",part.binNumber);

    return 0;
}
