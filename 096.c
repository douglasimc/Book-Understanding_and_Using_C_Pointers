#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * globalHeader = "Chapter";
char globalArrayHeader[] = "Chapter";

void displayHeader(){
    static char* staticHeader = "Chapter";
    char* localHeader = "Chapter";
    static char staticArrayHeader[] = "Chapter";
    char localArrayHeader[] = "Chapter";
    char* heapHeader = (char*)malloc(strlen("Chapter")+1);
    strcpy(heapHeader,"Chapter");
    printf("staticHeader: %p\n",staticHeader);
    printf("staticArrayHeader: %p\n",&staticArrayHeader[0]);
    printf("localHeader: %p\n",localHeader);
    printf("localArrayHeader: %p\n",localArrayHeader);
    printf("heapHeader: %p\n",&heapHeader[0]);
}

int main() {

    printf("globalHeader: %p\n",globalHeader);
    printf("globalArrayHeader: %p\n",globalArrayHeader);

    displayHeader();

    return 0;
}
