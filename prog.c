#include <stdio.h>

int main() {
    double number;
    char alphabet;

    printf("Enter double input and character: ");
    scanf("%lf %c", &number, &alphabet);  //scan the memory address

    printf("Number= %lf Character= %c", number, alphabet);
    return 0;
}