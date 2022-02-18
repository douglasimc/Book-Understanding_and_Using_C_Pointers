#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

    for(int i=0; i<2; i++) {
        for(int j=0; j<5; j++) {
            printf("matrix[%d][%d]  Address: %p  Value: %d\n",
                       i, j, &matrix[i][j], matrix[i][j]);
        }
    }

    return 0;
}
