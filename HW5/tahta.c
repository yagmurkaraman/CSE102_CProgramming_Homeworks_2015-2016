#include <stdio.h>

int main(){

	char board[64];
	int i,j;
	int count=0;

	printf("  a b c d e f g h\n");
	printf("  - - - - - - - -\n");
		
	for(i=8; i>0; --i){
	
			printf("%d|",i);
		
		for(j=0; j<8; ++j)	
		{
			board[count]='R';
			printf("%c ",board[count]);
			count++;
		}
		printf("|\n");
	}
	printf("  - - - - - - - -\n");		
}
