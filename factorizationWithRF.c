#include <stdio.h>
#include <stdlib.h>

void func(int number, int index){
    int multiplier;
    if(number == 1)
        return;
    if(number % index == 0){
        printf("%d\n", index);
        multiplier = number / index;
        func(multiplier, index);
    }
    else{
        index++;
        func(number, index);
    }
}
int main(){
    int number;
    printf("plesae enter number:");
    scanf("%d", &number);
    printf("FACTORS:\n");
    func(number, 2);
    return 0;
} 
