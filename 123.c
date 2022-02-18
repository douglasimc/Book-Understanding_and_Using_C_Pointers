#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;
} Person;

typedef struct _alternatePerson {
    char* firstName;
    char* lastName;
    char* title;
    short age;
} AlternatePerson;

int main() {
    Person person;
    AlternatePerson otherPerson;
    printf("Tamanho total de person: %d\n", sizeof(person));
    printf("Tamanho total person.age: %d\n",sizeof(person.age));
    printf("Tamanho total de otherPerson: %d\n", sizeof(otherPerson));
    printf("Tamanho total otherPerson.age: %d\n",sizeof(otherPerson.age));
    return 0;
}
