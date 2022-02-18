#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char command[16];

    printf("Enter a Command:  ");
    scanf("%s", command);

    printf("%p\n", command);
    printf("%p\n", "Quit");

    if(command == "Quit") { // Comparate the address
        printf("The command was Quit");
    } else {
        printf("The command was not Quit");
    }

    return 0;
}
