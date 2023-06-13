#include <stdio.h>
#include <stdlib.h>

int numberOfCharacter(char text[], int index){
	if(text[index] == '\0')
		return index;
	return numberOfCharacter(text, index + 1);
}
int main(){
	char text[50];
	printf("enter the text:");
	gets(text);
	int word = numberOfCharacter(text, 0);
	printf("word: %d\n", word);
	return 0;
}
