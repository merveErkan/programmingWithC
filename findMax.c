#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define arraySize 10

int findMax(int number[], int size){
    if(size == 1)
        return number[0];
    int max = findMax(number,(size - 1)); //last value in array
    if(number[size - 1] > max) //Compare the element of the array (size - 1) with max
        return number[size - 1];
    else
        return max;
}
int main(){
    int maxNumber, i;
    int number[arraySize];
    srand(time(NULL));
    for(i = 0; i < arraySize; i++){
        number[i] = rand() % 19 + 1;
        printf("%d\n", number[i]);
    }
    maxNumber = findMax(number, arraySize);
    printf("maxNumber: %d", maxNumber);
}
