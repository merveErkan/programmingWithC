#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

int control(int matrix[SIZE][SIZE], int row, int col, int number) {
    for (int i = 0; i < SIZE; i++) {
        if (matrix[row][i] == number || matrix[i][col] == number) {
            return 0;
        }
    }
    int startRow = row - (row % 3); // start of the row
    int startCol = col - (col % 3); // start of the column
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (matrix[i][j] == number)
                return 0;
        }
    }
    return 1;
}

void printTab(int matrix[SIZE][SIZE]) {
    printf("|--------------------------|\n");
    for (int i = 0; i < SIZE; i++) {
        printf("| ");
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
            if ((j + 1) % 3 == 0)
                printf(" | ");
        }
        printf("\n");
        if ((i + 1) % 3 == 0)
            printf("|--------------------------|\n");
    }
}

void fillTab(int matrix[SIZE][SIZE]) {
    int row, col, number;
    int num[SIZE + 1] = {0};  // Indicates that numbers (1-9) have not been used
    int count = 0; // Count of filled cells in the matrix

    while (count < 30) {
        row = rand() % SIZE; // Select a random row
        col = rand() % SIZE; // Select a random column
        number = rand() % SIZE + 1; // Place a random number between (1-9)

        if (matrix[row][col] == 0 && num[number] == 0 && control(matrix, row, col, number)) {
            // If the cell is empty, the number hasn't been used, and it's valid
            matrix[row][col] = number;
            num[number] = 1; // Mark the number as used
            count--; // Decrease the count of cells to be filled
            if (count == 80)
                printTab(matrix);
        } else
            count++;
    }
}

int main() {
    int matrix[SIZE][SIZE] = {0}; // Create a 9x9 matrix and initialize it with zeros
    srand(time(NULL));
    printf("**** WELCOME TO THE SUDOKU GAME ****\n");
    fillTab(matrix);
    printTab(matrix);
    int row, col, number, answer, count = SIZE * SIZE;
    while (1) {
        if (count != 0) { // If not all cells are filled
            printf("Please enter a valid location:\n");
            scanf("%d %d", &row, &col);
            row--;
            col--;
            if (row >= 0 && row < SIZE && col >= 0 && col < SIZE) { // If row and column numbers are valid
                printf("Please enter a number between (1-9)\n");
                scanf("%d", &number);
                if (matrix[row][col] == 0) { // If the cell is empty
                    if (number <= 9 && number >= 1) { // If the number is between 1 and 9
                        if (control(matrix, row, col, number)) { // If it satisfies the control function
                            matrix[row][col] = number;
                            count--;
                            printTab(matrix);
                        } else
                            printf("Not available\n");
                    } else
                        printf("!!!!Please enter a number between (1-9)\n");
                } else
                    printf("!!!!Please enter a suitable location\n");
            } else
                printf("!!!!Please enter a valid location\n");
        } else {
            printf("YOU WON THE GAME --- CONGRATULATIONS");
            return 2;
        }
    }
    printf("Do you want to continue the game? (Y/N):\n");
    scanf(" %c", &answer); // Read a character for the answer
    if (answer == 'N' || answer == 'n') {
        printf("Game over");
        return 2;
    }

    return 0;
}
