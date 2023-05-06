#include <stdio.h>
int combination(int n1, int n2){
	int i;
	int com = 1, fac = 1;
	int temp1, temp2, temp3;
	if(n1 >= n2){
		for(i = 1; i <= n1; i++){ //We get the factorial of n1
			fac *= i;
		}
		temp1 = fac;
		fac = 1;
		for(i = 1; i <= n2; i++){ //We get the factorial of n2
			fac *= i;
		}
		temp2 = fac;
		fac = 1;
		for(i = 1; i <= (n1 - n2); i++){ //We get the factorial of (n1-n2)
			fac *= i;
		}
		temp3 = fac;
		com = (temp1 / (temp2 * temp3)); //We calculate the combination by applying the formula.
		return com;
	}
	else{
		printf("ERROR");
	}
	return 0;
}
int main(){
	int n1, n2;
	printf("enter n1:\n");
	printf("enter n2:\n");
	scanf("%d %d", &n1, &n2); 
	int com = combination(n1, n2);
	if(com != 0) //will apply if combination is not equal to 0
		printf("combination:%2.d", com); //we call the combination function above.
	
	return 0;
}
