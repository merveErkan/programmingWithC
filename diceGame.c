#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int diceRolling(){
	int number = rand() % 6 + 1;
	return number;
}

int main(){
	int dice, sum1 = 0, sum2 = 0;
	srand(time(NULL));
	printf("\t\t\tWELCOME TO THE GAME\n\n");
	
	for(int i = 0; i < 10; i++){
		int number = diceRolling();
		if(i % 2 != 0)
			printf("\t<-->\t  ");
		printf("%d.dice:%d", i + 1, number);
		if(i % 2 == 0){
			sum2 += number;
		}
		else{
			sum1 += number;
			printf("\n");
		}
	}
	printf("\n");
	if(sum1 > sum2){
		printf("person1 won\n");
	}
	else if(sum1 < sum2){
		printf("person2 won\n");
	}
	else{
		printf("you tied\n");
	}
		printf("sum1:%d\nsum2:%d", sum1, sum2);
	
	 return 0;
}

