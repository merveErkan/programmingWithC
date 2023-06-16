#include <stdio.h>
#include <stdlib.h>
int Exponentiation(int a, int b){
    if(b == 0)
        return 1;
    return a * Exponentiation(a, b - 1);
}
int main(){
    int a, b, result;
    printf("enter a and b\n");
    scanf("%d %d", &a, &b);
    result = Exponentiation(a, b);
    printf("result: %d", result);
    return 0;
}
