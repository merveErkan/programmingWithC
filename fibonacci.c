#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int x){
    if(x <= 1)
        return x;

    return Fibonacci (x - 1) + Fibonacci(x - 2);
}
int main(){
    int count;
    printf("enter count:");
    scanf("%d", &count);
    int result = Fibonacci(count);
    printf("resulr :%d", result);
    return 0;
}
