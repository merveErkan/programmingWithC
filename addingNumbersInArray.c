#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define arraySize 10

int sum(int numbers[], int size) {
    if (size == 0)
        return numbers[size];
    return numbers[size] + sum(numbers, (size - 1)); // I said to be able to start from 0 [size - 1]
}

int main() {
    int i, result;
    int numbers[arraySize];

    srand(time(NULL));

    for (i = 0; i < arraySize; i++) {
        numbers[i] = rand() % 9 + 1;
        printf("%d\n", numbers[i]);
    }

    result = sum(numbers, arraySize - 1);
    printf("result: %d", result);

    return 0;
}
