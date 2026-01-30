#include <stdio.h>

int factorial(int number);
int doublefact(int number);
void oddcalc(int oddnum);
void evencalc(int evennum);
void WAP(int n);

int main() {
    // int result = factorial(5);
    // int result2 = doublefact(5);
    // // printf("%d", result);
    // printf("%d", result2);

    WAP(10);
    return 0;
}

int factorial(int number) {
    if (number == 1) {
        return 1;
    } else {
        return number*factorial(number-1);
    }
}

void oddcalc(int oddnum) {
    WAP(oddnum-1);
    printf(" %d", oddnum + 1);
}

void evencalc(int evennum) {
    WAP(evennum-1);
    printf(" %d", evennum - 1);
}

void WAP(int n) {
    if (n == 0) {
        return;
    } else if (n % 2 == 0) {
        evencalc(n);
    } else {
        oddcalc(n);
    }
}