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
    printf("person: %d\n", sizeof(person)); // Display 16
    printf("otherPerson: %d\n", sizeof(otherPerson)); // Display 16
    AlternatePerson people[30];
    printf("people: %d\n", sizeof(people)); // Display 16
    return 0;
}
