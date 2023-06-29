#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arrangement(int numbers[], int size){
    int i, j, temp;
    for(i = 0; i < size; i++){
        for(j = i; j < size; j++){
            if(numbers[j] > numbers[i]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}
int main(){
    int result, i;
    int numbers[10];
    srand(time(NULL));
    for(i = 0; i < 10; i++){
        numbers[i]= rand() % 99 + 1;
        printf("%d\n", numbers[i]);
    }
    printf("Sorted numbers:\n");
    arrangement(numbers, 10);
     for (i = 0; i < 10; i++) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}
