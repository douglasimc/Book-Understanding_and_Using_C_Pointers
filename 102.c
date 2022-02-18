#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
   char* error = "ERROR: ";
   char* errorMessage = "Not enough memory";

   //strcat(error, errorMessage); // Break

   printf("%s\n", error);
   printf("%s\n", errorMessage);

    return 0;
}
