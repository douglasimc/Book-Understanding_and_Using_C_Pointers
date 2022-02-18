#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
   char* path = "C:";
   char* currentPath = (char*) malloc(strlen(path)+2);

    strcpy(currentPath, path);
   currentPath = strcat(currentPath, "\\");
   //currentPath = strcat(currentPath, '\\'); // Break
   //currentPath = strcat(path, '\\');

   printf("%s\n",currentPath);

    return 0;
}
