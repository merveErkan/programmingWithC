#include <stdio.h>
int main(){
	
	int i, j;
	for(i = 0; i < 9; i++){
		for(j = 0; j < 9; j++){
		if(i == 0 && j == 0 || i == 0 && j == 8 || i == 8 && j == 0 || i == 8 && j == 8){
			printf("1");
		}
		else if(i == 1 && j == 1 || i == 1 && j == 7 || i == 7 && j == 1 || i == 7 && j == 7){
			printf("2");
		}
		else if(i == 2 && j == 2 || i == 2 && j == 6 || i == 6 && j == 2 || i == 6 && j == 6){
			printf("3");
		}
		else if(i == 3 && j == 3 || i == 3 && j == 5 || i == 5 && j == 3 || i == 5 && j == 5){
			printf("4");
		}
		else if(i == 4 && j == 4){
			printf("5");
		}
		else{
			printf(" ");
		}
		}
		printf("\n");
	}
	return 0;
}
