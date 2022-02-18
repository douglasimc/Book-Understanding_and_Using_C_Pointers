#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int uint;

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    uint age;
} Person;

void initializePerson(Person *person, const char* fn,
                      const char* ln, const char* title, uint age) {
    person->firstName = (char*) malloc(strlen(fn) + 1);
    strcpy(person->firstName, fn);
    person->lastName = (char*) malloc(strlen(ln) + 1);
    strcpy(person->lastName, ln);
    person->title = (char*) malloc(strlen(title) + 1);
    strcpy(person->title, title);
    person->age = age;
}

void deallocatePerson(Person *person) {
    free(person->firstName);
    free(person->lastName);
    free(person->title);

}

void processPerson(){
    Person person;
    initializePerson(&person, "Peter", "Underwood", "Manager", 36);
    printf("%s %s is a %s and has %d years old.\n",person.firstName,person.lastName,person.title,person.age);
    deallocatePerson(&person);
}


int main() {
    processPerson();
    return 0;
}
