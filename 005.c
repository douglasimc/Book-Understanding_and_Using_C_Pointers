#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 5;
    int *pi = &num;

    printf("%d\n",*pi); // Displays 5

    *pi = 200;

    printf("%d\n",num); // Displays 200

    system("PAUSE");
    return 0;
}
