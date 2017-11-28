#include <stdio.h>

int main(){

	double arr[8][8];
	char board[64];
	int temp;
	int i;
	int j; 

	printf("  a b c d e f g h\n");
	printf("  - - - - - - - -\n");
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
		
			temp=arr[i][i];
			arr[i][j]=board[8*i+j];
			board[8*i+j]=temp;
		}
		
		board[0]='r';
		board[1]='n';
		board[2]='b';
		board[3]='q';
		board[4]='k';
		board[5]='b';
		board[6]='n';
		board[7]='r';
		
		for(i=8; i<16; i++){
			board[i]='p';
		}
		printf("8|");	
		printf("%c ",board[0]);
		printf("%c ",board[1]);
		printf("%c ",board[2]);
		printf("%c ",board[3]);
		printf("%c ",board[4]);	
		printf("%c ",board[5]);
		printf("%c ",board[6]);
		printf("%c ",board[7]);
		printf("|\n");
		printf("7|");
		printf("%c ",board[8]);
		printf("%c ",board[9]);
		printf("%c ",board[10]);
		printf("%c ",board[11]);	
		printf("%c ",board[12]);
		printf("%c ",board[13]);
		printf("%c ",board[14]);
		printf("%c ",board[15]);
		printf("|\n");
		
		printf("6|");
		printf("                |\n");
		printf("5|");
		printf("                |\n");
		printf("4|");
		printf("                |\n");
		printf("3|");
		printf("                |\n");
				
		board[56]='R';
		board[57]='N';
		board[58]='B';
		board[59]='Q';
		board[60]='K';
		board[61]='B';
		board[62]='N';
		board[63]='R';
		for(i=48; i<56; i++){
			board[i]='P';
		}	
		printf("2|");
		printf("%c ",board[48]);
		printf("%c ",board[49]);
		printf("%c ",board[50]);
		printf("%c ",board[51]);
		printf("%c ",board[52]);	
		printf("%c ",board[53]);
		printf("%c ",board[54]);
		printf("%c ",board[55]);
		printf("|\n");
		printf("1|");
		printf("%c ",board[56]);
		printf("%c ",board[57]);
		printf("%c ",board[58]);
		printf("%c ",board[59]);	
		printf("%c ",board[60]);
		printf("%c ",board[61]);
		printf("%c ",board[62]);
		printf("%c ",board[63]);
		printf("|");
		printf("\n");
		printf("  - - - - - - - -\n");		
	}
	
	

}
