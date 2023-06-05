#include <stdio.h>
#include <stdlib.h>
int C(int x, int y){
    if(y == 0)
        return 1;
    return x * C(x- 1, y - 1) / y;
}
int main(){
    int x, y, result;
    printf("enter x and y\n");
    scanf("%d %d", &x, &y);
    result = C(x, y);
    printf("result : %d", result);
    return 0;
}
