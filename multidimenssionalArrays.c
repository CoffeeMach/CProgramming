#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int printTable();
int printGrid();
void userMove();
void randomMoveMaker();
void checkWinner();

char grid[3][3] = {{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};
bool winnerChosen = false;

int main() {
    srand(time(NULL));
    int table[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    printf("WELCOME TO catDogCat GAME!");
    printf("\n\nPlace 3 cats horizontally, vertically, or diagonally to win!\n\n");

    printf("This is the playing grid: \n");
    printTable(table);

    while(winnerChosen != true) {
        printf("\nMake your move: ");
        userMove();
        printf("\nAfter your move:\n");
        printGrid(grid);
        checkWinner();
        if (winnerChosen == true) {
            break;
        }
        randomMoveMaker();
        printf("\nAfter computer move:\n");
        printGrid(grid);
        checkWinner();
    }

    return 0;
}

int printTable(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int printGrid(char arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void userMove() {
    int square;
    scanf("%d", &square);

    switch(square) {
        case 1:
            if(grid[0][0] == 'D' || grid[0][0] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[0][0] = 'C';
            break;
        case 2:
            if(grid[0][1] == 'D' || grid[0][1] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[0][1] = 'C';
            break;
        case 3:
            if(grid[0][2] == 'D' || grid[0][2] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[0][2] = 'C';
            break;
        case 4:
            if(grid[1][0] == 'D' || grid[1][0] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[1][0] = 'C';
            break;
        case 5:
            if(grid[1][1] == 'D' || grid[1][1] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[1][1] = 'C';
            break;
        case 6:
            if(grid[1][2] == 'D' || grid[1][2] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[1][2] = 'C';
            break;
        case 7:
            if(grid[2][0] == 'D' || grid[2][0] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[2][0] = 'C';
            break;
        case 8:
            if(grid[2][1] == 'D' || grid[2][1] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[2][1] = 'C';
            break;
        case 9:
            if(grid[2][2] == 'D' || grid[2][2] == 'C') {
                printf("That square is occupied. Choose another one: ");
                userMove();
                break;
            }
            grid[2][2] = 'C';
            break;
        default:
            printf("Invalid number");
    }
    return;
}

void randomMoveMaker() {

    int randomMove = (rand() % 9) + 1;

    switch(randomMove) {
        case 1:
            if(grid[0][0] == 'C' || grid[0][0] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[0][0] = 'D';
            break;
        case 2:
            if(grid[0][1] == 'C' || grid[0][1] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[0][1] = 'D';
            break;
        case 3:
            if(grid[0][2] == 'C' || grid[0][2] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[0][2] = 'D';
            break;
        case 4:
            if(grid[1][0] == 'C' || grid[1][0] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[1][0] = 'D';
            break;
        case 5:
            if(grid[1][1] == 'C' || grid[1][1] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[1][1] = 'D';
            break;
        case 6:
            if(grid[1][2] == 'C' || grid[1][2] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[1][2] = 'D';
            break;
        case 7:
            if(grid[2][0] == 'C' || grid[2][0] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[2][0] = 'D';
            break;
        case 8:
            if(grid[2][1] == 'C' || grid[2][1] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[2][1] = 'D';
            break;
        case 9:
            if(grid[2][2] == 'C' || grid[2][2] == 'D') {
                randomMoveMaker();
                break;
            }
            grid[2][2] = 'D';
            break;
        default:
            printf("Invalid number");
    }
    return;
}

void checkWinner() {
    if(grid[0][0] == 'D' && grid[0][1] == 'D' && grid[0][2] == 'D' ||
       grid[1][0] == 'D' && grid[1][1] == 'D' && grid[1][2] == 'D' ||
       grid[2][0] == 'D' && grid[2][1] == 'D' && grid[2][2] == 'D' ||
       grid[0][0] == 'D' && grid[1][0] == 'D' && grid[2][0] == 'D' ||
       grid[0][1] == 'D' && grid[1][1] == 'D' && grid[2][1] == 'D' ||
       grid[0][2] == 'D' && grid[1][2] == 'D' && grid[2][2] == 'D' ||
       grid[0][0] == 'D' && grid[1][1] == 'D' && grid[2][2] == 'D' ||
       grid[0][2] == 'D' && grid[1][1] == 'D' && grid[2][0] == 'D') {
        printf("Computer wins!\n");
        winnerChosen = true;

    }

    if(grid[0][0] == 'C' && grid[0][1] == 'C' && grid[0][2] == 'C' ||
       grid[1][0] == 'C' && grid[1][1] == 'C' && grid[1][2] == 'C' ||
       grid[2][0] == 'C' && grid[2][1] == 'C' && grid[2][2] == 'C' ||
       grid[0][0] == 'C' && grid[1][0] == 'C' && grid[2][0] == 'C' ||
       grid[0][1] == 'C' && grid[1][1] == 'C' && grid[2][1] == 'C' ||
       grid[0][2] == 'C' && grid[1][2] == 'C' && grid[2][2] == 'C' ||
       grid[0][0] == 'C' && grid[1][1] == 'C' && grid[2][2] == 'C' ||
       grid[0][2] == 'C' && grid[1][1] == 'C' && grid[2][0] == 'C') {
        printf("You win!\n");
        winnerChosen = true;
    }

    return;
}