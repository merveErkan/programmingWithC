#include <stdio.h>
int main(){
	
	int i, j;
	for(i = 0; i < 15; i++){
		printf("* ");
	}
	printf("\n");
	for(i = 1; i <= 7; i++){
		for(j = 0; j <= 7 - i; j++){
			printf("* ");
		}
	    for(j=1;j <= 2*i-1;j++){
	        printf("  ");
	    }
		for(j = 0; j <= 7 - i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

