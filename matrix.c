#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void tabMatrix(int matrix[10][10], int row, int col){
    int random = matrix[row][col];
        if(random < 10) //sets spaces between numbers
            printf("%d   ", matrix[row][col]);
        else if(random == 100)
            printf("%d ", matrix[row][col]);
        else
            printf("%d  ", matrix[row][col]);
        if(col == 9)
            printf("\n");
    }
void randMatrix(int matrix[10][10], int matri[100]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            int random = rand() % 100 + 1; //I'm throwing random numbers
            while(matri[random - 1] == 1){ //random- 1.if the expression is equal to 1, it continues until it becomes 0.
                random = rand() % 100 + 1; //new random number
            }
                matrix[i][j] = random;
                matri[random - 1] = 1; //Set random - 1. to 1, so mark it as used
                tabMatrix(matrix, i, j);
        }
    }
            
}
int main(){
    int matrix[10][10] = {0};
    int matri[100] = {0}; //I make all elements 0
    srand(time(NULL));
    randMatrix(matrix, matri); //I call randMatrix function
    return 0;
}
