#include <stdio.h>
#include <stdlib.h>

int main(){
void (*foo)();
int (*f1)(double);  // Passed a double and
                    // returns an int
void (*f2)(char *); // Passed a pointer to char and
                    // returns void
double* (*f3)(int, int);// Passed two integers and
                        // returns a pointer to a double
int *f4();      /*function that returns a pointer to an integer*/
int (*f5)();    /*function pointer that returns an integer*/
int* (*f6)();   /*function pointer that returns a pointer to an integer*/
return (EXIT_SUCCESS);
}
