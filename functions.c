#include <stdio.h>
#include <ctype.h>

//function prototypes to define functions after main
void greet(char name[]);
int square(int number);

int main() {
    // char username[15];
    // printf("What is your name?: ");
    // scanf("%14s", username);
    // greet(username);

    // int result = square(4);
    // printf("\nResult = %d", result);

    char alpha = 'e';
    char upper = toupper(alpha);
    printf("%c", upper);

    return 0;
}

void greet(char name[]) {  //does not return any value
    printf("Good morning %s", name);
}

int square(int number) {  //stores return value
    int square = number*number;
    return square;
}