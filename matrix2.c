#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void randMatrix(int matrix[10][10], int matri[100]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            int random = rand() % 100 + 1; 
            while(matri[random - 1] == 1){ 
                random = rand() % 100 + 1; 
            }
                matrix[i][j] = random;
                matri[random - 1] = 1; 
        }
    }
            
}
void tabMatrix(int matrix[10][10]){
    int matri[100] = {0};
    randMatrix(matrix, matri);
    for(int row = 0; row < 10; row++){
        for(int col = 0; col < 10; col++){
            int random = matrix[row][col];
            if(random < 10) 
                printf("%d   ", matrix[row][col]);
            else if(random == 100)
                printf("%d ", matrix[row][col]);
            else
                printf("%d  ", matrix[row][col]);
            if(col == 9)
                printf("\n");
        }
    }
}
int main(){
    int matrix[10][10] = {0};
    int matri[100] = {0}; 
    srand(time(NULL));
    tabMatrix(matrix); 
    return 0;
}
