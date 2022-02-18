#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RAII_VARIABLE(vartype,varname,initval,dtor) \
void _dtor_ ## varname (vartype * v) { dtor(*v); } \
vartype varname __attribute__((cleanup(_dtor_ ## varname))) = (initval)

int main()
{
    void raiiExample() {
        RAII_VARIABLE(char*, name, (char*)malloc(32), free);
        strcpy(name,"RAII Example");
        printf("%s\n",name);
    }

    system("PAUSE");
    return 0;
}
