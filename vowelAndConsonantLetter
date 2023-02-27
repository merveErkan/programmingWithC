#include <stdio.h>
int main(){
	int i;
	int vowel = 0;
	int consonant = 0;
	char line[50];
	printf("enter line:");
	scanf("%s", &line);
	// loop through string char
	for(i = 0; line[i] != '\0'; i++){
		//Checking if characters are from the alphabet
		if((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')){
			//whether it is a vowel or not from the alphabet
			if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' ||
			   line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U'){
			   	vowel++;
			   }
			else
				consonant++;  
		}	
	}
	printf("vowel : %d", vowel);
	printf("\nconsonant : %d", consonant);
	
	
	return 0;
}
