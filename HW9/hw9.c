#include <stdio.h>
#define SENTINEL -1

struct country{

	char name[25];
	int pop;
	double area;
	int sold;
	int neig;

}c[100];

int main(){

	int i;
	char select;
	
	scanf(" %c",&select);
	/*printf("select: %c\n",select);*/
	
	if(select=='a'){
	
		printf("if'in icindeyim\n");
		
		for(i=1; (*c[i].name)!=SENTINEL; i++){
					
			scanf("%s",c[i].name);				
			printf("%s\n",c[i].name);
			
			if(*c[i].name==SENTINEL){
	
				return 0;
			}
		}
	}
	return 0;
}
