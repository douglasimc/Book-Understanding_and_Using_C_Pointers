#include <stdio.h>
#include <stdlib.h>

/*struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;
};*/

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;
} Person;

int main() {
    Person person;
    Person *ptrPerson;
    ptrPerson = (Person*) malloc(sizeof(Person));
    return 0;
}
