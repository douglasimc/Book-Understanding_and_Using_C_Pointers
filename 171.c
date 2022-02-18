#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char name[32];
    int userID;
    char *securityQuestion;

    //assign values
    char question[] = "How many lemons you do make a lemonade?";
    strcpy (name,"Douglas");
    userID = 17;
    securityQuestion = question;

    // Delete sensitive information
    memset(name,0,sizeof(name));
    userID = 0;
    memset(securityQuestion,0,strlen(securityQuestion));

    return 0;
}
