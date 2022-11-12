#include <stdio.h>
int main(){
	int i, j, counter1 = 0, counter2 = 0;
	int primeNumber[100] = {0};
	int notPrimeNumber[100] = {0};
	for(i = 2; i < 100; i++){
		int flag1 = 0;
		for(j = 2; j < i; j++){
			if(i % j == 0){
				notPrimeNumber[counter1] = i;
				flag1++;
				if(flag1 == 1){
					counter1++;
				}
			}
		}
		if(flag1 == 0){
			primeNumber[counter2] = i;
			counter2++;
		}
		if(flag1 >= 1){
			printf("%d = ", notPrimeNumber[counter1 - 1]);
			for(j = 0; primeNumber[j] != 0; j++){
				if(notPrimeNumber[counter1 - 1] % primeNumber[j] == 0)
					printf("%d ", primeNumber[j]);	
			}
			printf("\n");
		}
	}
	return 0;
}
