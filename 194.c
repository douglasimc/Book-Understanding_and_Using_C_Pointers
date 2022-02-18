#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "link.h"

typedef struct _node {
    Data* data;
    struct _node* next;
} Node;

/* create an instance of the _linkedList structure for typedef LinkedList in list.h */
struct _linkedList {
    Node* head;
 };


LinkedList* getLinkedListInstance() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    return list;
}

void removeLinkedListInstance(LinkedList* list) {
    Node *tmp = list->head;
    while(tmp != NULL) {
        free(tmp->data);  // Potencial memory leak!
        Node *current = tmp;
        tmp = tmp->next;
        free(current);
    }
    free(list);
}

void addNode (LinkedList* list, Data data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    if(list->head == NULL) {
        list->head = node;
        node->next = NULL;
    } else {
        node->next = list->head;
        list->head = node;
    }
}

Data removeNode(LinkedList* list) {
    if(list->head == NULL) {
        return NULL;
    } else {
        Node* tmp = list->head;
        Data* data;
        list->head = list->head->next;
        data = tmp->data;
        free(tmp);
        return data;
    }
}

typedef struct _person {
char* firstName;
char* lastName;
char* title;
unsigned int age;
} Person;

void initializePerson(Person *person, const char* fn,
const char* ln, const char* title, unsigned int age) {
    person->firstName = (char*) malloc(strlen(fn) + 1);
    strcpy(person->firstName, fn);
    person->lastName = (char*) malloc(strlen(ln) + 1);
    strcpy(person->lastName, ln);
    person->title = (char*) malloc(strlen(title) + 1);
    strcpy(person->title, title);
    person->age = age;
}

void displayPerson(Person* employee) {
    printf("%s\t%d\n", employee->firstName, employee->age);
}

int main() {

    LinkedList* list = getLinkedListInstance();

    Person *person = (Person *) malloc(sizeof(Person));
    initializePerson(person, "Peter", "Underwood", "Manager", 36);
    addNode(list, person);
    person = (Person *) malloc(sizeof(Person));
    initializePerson(person, "Sue", "Stevenson", "Developer", 28);
    addNode(list, person);

    person = removeNode(list);
    displayPerson(person); // Not is necessary person be dereferenced

    person = removeNode(list);
    displayPerson(person); // Not is necessary person be dereferenced

    removeLinkedListInstance(list);

    return EXIT_SUCCESS;
}
