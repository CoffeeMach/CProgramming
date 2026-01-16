// Written by Dilara Basturk 07.10.2023
// This program displays my name and the address of the Computer Science Department

#include <stdio.h>
#include <string.h>

int main(void)
{
    char myName[] = "Dilara";
    char CSName[] = "Department of Computer Science";
    char address1[] = "Malet Place Engineering Building";
    char address2[] = "Floors 4 and 6";
    printf("Hello, my name is %s\n", myName);
    printf("The name of my department is %s\n", CSName);
    printf("The address of my department is %s %s\n", address1, address2);

    int index1 = strlen(myName) - 1;
    int index2 = strlen(CSName) - 1;
    int index3 = strlen(address1) - 1;
    int index4 = strlen(address2) - 1;
    while (index1, index2, index3, index4 > -1);
    {
        printf("%c", myName[index1]);
        printf("%c", CSName[index2]);
        printf("%c", address1[index3]);
        printf("%c", address2[index4]);
        index1, index2, index3, index4 = index1, index2, index3, index4 - 1;
    }
    printf("\n");
    return 0;
}