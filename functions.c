#include <stdio.h>

void greet(char name[15]) {  //does not return any value
    printf("Good morning %s", name);
}

int main() {
    char username[15];
    printf("What is your name?: ");
    scanf("%14s", username);
    greet(username);
    return 0;
}