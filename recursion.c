#include <stdio.h>

int factorial(int number);

int main() {
    int result = factorial(5);
    printf("%d", result);
    return 0;
}

int factorial(int number) {
    if (number == 1) {
        return 1;
    } else {
        return number*factorial(number-1);
    }
}