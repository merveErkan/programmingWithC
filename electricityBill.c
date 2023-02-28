#include<stdio.h>
int main(){
	
	int consumedElectricity, value;
	float invoice = 0;
	printf("enter the electricity consumed:");
	scanf("%d",&consumedElectricity);
	value = consumedElectricity;
	printf("%.f",value);
	
	if(value < 50){
		invoice = value*0.50 + (value*0.50)*0.2;
		printf("%2.f",invoice);
	}
	else if(value < 150){
		invoice = 50*0.50 + (value-50)*0.75 + (50*0.50 + (value-50)*0.75)*0.2;
		printf("%2.f",invoice);
	}
	else if(value < 250){
		invoice = 50*0.50 + 100*0.75 + (value-150)*1.20 + ( 50*0.50 + 100*0.75 + (value-150)*1.20)*0.2;
		printf("%2.f",invoice);
	}
	else{
		invoice = 50*0.50 + 100*0.75 + 100*1.20 + (value-250)*1.50 + (50*0.50 + 100*0.75 + 100*1.20 + (value-250)*1.50)*0.2;
		printf("%2.f",invoice);
	}
	

	return 0;
}
