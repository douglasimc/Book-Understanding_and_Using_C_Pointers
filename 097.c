#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char command[16];

    printf("Enter a Command:  ");
    scanf("%s", command);
    if(strcmp(command, "Quit") == 0) {
        printf("The command was Quit");
    } else {
        printf("The command was not Quit");
    }

    return 0;
}
