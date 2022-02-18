#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
   char error[] = "ERROR: ";
   char errorMessage[] = "Not enough memory";

   error = strcat(error, errorMessage); // Return is a char * // Error

   printf("%s\n", error);
   printf("%s\n", errorMessage);

    return 0;
}
