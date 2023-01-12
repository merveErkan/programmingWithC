#include <stdio.h>
#include <string.h>
 int main(){
 	char process;
 	printf("\t\t\t\t\t\tWELCOME TO GAME\n");
	char blok [5][5] =  {{'1','|','2','|','3'},  
                    	 {'-','|','-','|','-'},  
                    	 {'4','|','5','|','6'},  
                    	 {'-','|','-','|','-'},  
                    	 {'7','|','8','|','9'}};
	for(int i = 0; i < 5; i++){
	 	for(int j = 0; j < 5; j++){
	 		printf("%c\t", blok[i][j]);
		}
		printf("\n\n");
	}
 	char player1 [10];
 	char player2 [10];
 	for(int i = 0; i < 2; i++){
 		if(i == 0){
 			printf("name of player 1:");
 			scanf("%s", &player1);
 			printf("name of player 2:");
 			scanf("%s", &player2);
		}
		else{
		 	char temp[10];          
		 	strcpy(temp, player1);                    //player1 throws into the temp
		 	for(int j = 0; j < sizeof(player1); j++){ // player1 reset all letters
		 		player1[i] = NULL;                    // reset pllayer1
			}
		 	strcpy(player1, player2);
		 	for(int j = 0; j < sizeof(player2); j++){ // player2 reset all letters
		 		player2[i] = NULL;                    // reset pllayer2
			}
		 	strcpy(player2, temp);	 	              //temp throws into the player2
		}
		char send;
		for(int r = 0; r < 9; r++){
		 	if(r % 2 == 0){
		 		printf("%s, make your move:", player1);
		 		scanf("%s", &process);
		 		printf("\n");
		 		send = 'x';
			}
			else{
				printf("%s, make your move:", player2);
				scanf("%s", &process);
				printf("\n");
				send = 'o';
			}
			for(int j = 0; j < 5; j++){
			 	for(int k = 0; k < 5; k++){
			 		if(process == blok[j][k]){
					  	blok[j][k] = send;
					}
					printf("%c\t", blok[j][k]);
				}
				printf("\n\n");
			}
		 	if(blok[0][0] == 'x' && blok[0][2] == 'x' && blok[0][4] == 'x' || blok[2][0] == 'x' && blok[2][2] == 'x' && blok[2][4] == 'x'
			 || blok[4][0] == 'x' && blok[4][2] == 'x' && blok[4][4] == 'x' || blok[0][0] == 'x' && blok[2][0] == 'x' && blok[4][0] == 'x'
			 || blok[0][2] == 'x' && blok[2][2] == 'x' && blok[4][2] == 'x' || blok[0][4] == 'x' && blok[2][4] == 'x' && blok[4][4] == 'x'
			 || blok[0][4] == 'x' && blok[2][2] == 'x' && blok[4][0] == 'x'){
			 	i = 1000;
			 	r = 10;
		 		printf("%s won", player1);
			 }
		 	else if(blok[0][0] == 'o' && blok[0][2] == 'o' && blok[0][4] == 'o' || blok[2][0] == 'o' && blok[2][2] == 'o' && blok[2][4] == 'o'
			 || blok[4][0] == 'o' && blok[4][2] == 'o' && blok[4][4] == 'o' || blok[0][0] == 'o' && blok[2][0] == 'o' && blok[4][0] == 'o'
			 || blok[0][2] == 'o' && blok[2][2] == 'o' && blok[4][2] == 'o' || blok[0][4] == 'o' && blok[2][4] == 'o' && blok[4][4] == 'o'
			 || blok[0][4] == 'o' && blok[2][2] == 'o' && blok[2][0] == 'o'){
			 	i = 1000;
			 	r = 10;
		 		printf("%s won", player2);
			}
			else{      //rebuilds the game table in case of a draw
				if(r == 8 && i != 1){ 
			 		printf("Tied\n\n");
					 	char blok2 [5][5] = {{'1','|','2','|','3'},  
						                     {'-','|','-','|','-'},  
						                     {'4','|','5','|','6'},  
						                     {'-','|','-','|','-'},  
						                     {'7','|','8','|','9'}};
			 		strcpy(blok, blok2);
			 		for(int m = 0; m < 5; m++){
			 			for(int n = 0; n < 5; n++){
					 		printf("%c\t", blok[m][n]);
						}
						printf("\n\n");
					}	 		
				}
				else if(r == 8 && i == 1)
					printf("\nGame done!!!");
			}
		}
	}
 	return 0;
 }
