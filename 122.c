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
    printf("%d\n", sizeof(Person)); // Display 16
    printf("%d\n", sizeof(AlternatePerson)); // Display 16
    return 0;
}
