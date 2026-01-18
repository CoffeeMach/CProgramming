#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // bool iamstupid;

    // char name[15];

    // printf("Enter your name: ");
    // scanf("%14s", name);

    // char answer[4];

    // printf("Are you an idiot? Answer 'yes' or 'no': ");
    // scanf("%3s", answer);

    // if (strcmp(answer, "yes") == 0) { iamstupid = true; } else { iamstupid = false; }

    // if (iamstupid) {
    //     printf("%s is an idiot.", name);
    // } else {
    //     printf("%s thinks they are not an idiot.", name);
    // }

    //ternary operator:
    //test_cond ? expr1 : expr2;

    printf("Determine password: ");
    char pwd[10];
    scanf("%9s", pwd);

    while (true) {
        printf("\nInput password: ");
        char pass[10];
        scanf("%9s", pass);
        (strcmp(pass, pwd) == 0) ? printf("logged in") : printf("try again");
    }

    return 0;
}