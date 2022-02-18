#include <stdio.h>
#include <string.h>


typedef struct _employee {
    char name[10];
    int age;
} Employee;

int main(int argc, char** argv) {
    Employee employee;
    char *ptr = employee.name;
    ptr += sizeof(employee.name);

    printf("employee.name end address (char): %p\n",ptr);
    printf("employee.age start address (int): %p\n",&employee.age);


    return 0;
}
