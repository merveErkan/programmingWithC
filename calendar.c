#include <stdio.h>
int main(){
	int i, j, k, month;
	int firstDay, day;
	printf("enter the firstDay:");
	scanf("%d", &firstDay);
	for(i = 1; i <= 12; i++){
		printf("\t%d.month\t", i);
			printf("\nMO TU WE TH FR SA SU\n");
			for(k = 0; k < firstDay - 1; k++){
				printf("   ");
			}
			if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
				for(j = 1; j < 32; j++){
					if(j < 10) 
						printf("%d  ", j);
					else 
						printf("%d ", j); 
					day = j;
					if((j + firstDay - 1) % 7 == 0){
						printf("\n");
					}
				}
					printf("\n");
			}
			else if(i == 4 || i == 6 || i == 9 || i == 11){
				for(j = 1; j < 31; j++){
					if(j < 10) 
						printf("%d  ", j);
					else
						printf("%d ", j);
					day = j;
					if((j + firstDay - 1) % 7 == 0){
						printf("\n");
					}
				}
				printf("\n");
			}
			else{
				for( j = 1; j < 29; j++){
					if(j < 10) 
						printf("%d  ", j);
					else 
						printf("%d ", j);
						day = j;
					if((j + firstDay - 1) % 7 == 0){
						printf("\n");
					}
				}
				printf("\n");
			}
		firstDay = (firstDay + day) % 7;
		if(firstDay == 0)
			firstDay = 7;
	}
	return 0;
}
