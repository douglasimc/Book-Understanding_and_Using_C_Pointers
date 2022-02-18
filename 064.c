#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef int (*fptrToSingleInt)(int);
    typedef int (*fptrToTwoInts)(int,int);
    int add(int, int); // compiler error

    fptrToTwoInts fptrFirst = add;
    fptrToSingleInt fptrSecond = (fptrToSingleInt)fptrFirst;
    fptrFirst = (fptrToTwoInts)fptrSecond;
    printf("%d\n",fptrFirst(5,6));

    return 0;
}
