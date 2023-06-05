#include <stdio.h>
#include <stdlib.h>
int F(int a){
    if(a == 0)
        return 1;
    return a * F(a - 1);
}
int P(int x, int y){
    if(x > y)
        return F(x) / F(x - y);
}
int C(int x, int y){
    if(x > y)
        return P(x, y) / F(y);
}

int main(){
    int x, y, result;
    printf("enter x and y\n");
    scanf("%d %d", &x, &y);
    result = C(x, y);
    printf("result : %d", result);
    return 0;
}
