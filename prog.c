#include <stdio.h>
#include <stdbool.h>

int main() {
    bool iamstupid = true;

    char name[15] = "";

    if (iamstupid) {
        printf("Enter your name: ");
        scanf("%14s", name);
        printf("%s is an idiot.", name);
    }

    return 0;
}