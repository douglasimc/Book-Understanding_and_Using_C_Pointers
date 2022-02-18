#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;
} Person;

int main() {
    Person person;
    person.firstName = (char*) malloc(strlen("Emily")+1);
    strcpy(person.firstName,"Emily");
    person.age = 23;
    printf("%s tem %d ano(s)\n", person.firstName, person.age);
    return 0;
}
