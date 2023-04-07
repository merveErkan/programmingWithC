#include <stdio.h>
int main(){
	int i, j, space, rows, number = 1;
	printf("enter rows:");
	scanf("%d", &rows);
	for(i = 0; i < rows; i++){
		for(space = 1; space < rows - i; space++){ //A space is left equal to the number of lines entered minus the number of lines found.
			printf("  ");
		}
		for(j = 0; j <= i; j++){
			if(j == 0 || i == 0) //If j and i are 0 we write 1
			number = 1;
			else
			number = number * (i - j + 1) / j; //if not, it applies the formula established to find the number we need to write.
			printf("%5d", number); //we say %4d to align right.
		}
		printf("\n");
	}
	return 0;
}
