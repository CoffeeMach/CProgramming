#include <stdio.h>

int main() {
    // TO MAKE ARRAY: datatype arrayName[arraySize];
    int age[5] = {21, 22, 23, 24};

    printf("Initial values of array: ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", age[i]);
    }

    printf("\nEnter new values: ");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &age[i]);
    }

    printf("New values of array: ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", age[i]);
    }

    return 0;
}