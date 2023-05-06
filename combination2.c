#include <stdio.h>
float combination(int n1, int n2){
		int i;
		float temp1, temp2;
		float com = 1, fac = 1;
	if(n2 <= n1){
		for(i = (n1 - n2) + 1; i <= n1; i++){ ////We get the factorial of (n1-n2)
			fac *= i;
		}
		temp1 = fac;
		fac = 1;
		for(i = 1; i <= n2; i++){ //We get the factorial of n2
			fac *= i;
		}
		temp2 = fac;
		com = (float)(temp1 / temp2);  //We calculate the combination by applying the formula.
		return com;
	}
	else{
		printf("ERROR");
		return 0;
	}
	
}
int main(){
	int n1, n2;
	printf("eneter n1:\n");
	printf("eneter n2:\n");
	scanf("%d %d", &n1, &n2);
	float com = (combination(n1, n2));
	if(com != 0) //will apply if combination is not equal to 0
	printf("combination:%2.f", com); //we call the combination function above.
	return 0;
}
