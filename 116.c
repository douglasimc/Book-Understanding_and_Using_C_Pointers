#include <stdio.h>
#include <stdlib.h>

#define MAX_TAB_LENGHT 32

char* blanks(int number) {
    char spaces[MAX_TAB_LENGHT];
    int i;
    for (i = 0; i < number && i < MAX_TAB_LENGHT; i++) {
        spaces[i] = ' ';
    }
    spaces[number] = '\0';
    return spaces;
}

int main() {
    char *tmp = blanks(5);
    printf("[%s]\n",tmp);
    free(tmp);
    return 0;
}
