#include <stdio.h>
#include <string.h>

typedef struct{

	char name[25];
	int pop;
	int area;
	int sold;
	char neig[10];

}c_t;

void read_a(c_t country);
void read_b(c_t country);
void read_c(c_t country);
void read_d(c_t country);
void read_e(c_t country);

int main(){

	char ch;
	
	c_t country[100];

	
	printf("Make your choice:\n");
	scanf("%c",&ch);

	switch(ch){
	
		case 'a': read_a(*country); break;
		case 'b': read_b(*country); break;
		case 'c': read_c(*country); break;
		case 'd': read_d(*country); break;
		case 'e': read_e(*country); break;	
	}
	return 0;
}
void read_a(c_t country){
		
	int i,j;	
		
	scanf("%s",country[i].name);
	scanf("%d",&country[i].pop);	
	scanf("%d",&country[i].area);
	scanf("%d",&country[i].sold);
    
	j=0;
	while(scanf("%s",country[j])){
	
		while(strcmp(country[j],"-1")!=0){
		
			i++;
		}
	}	
	return;
}
void read_b(c_t country){}
void read_c(c_t country){}
void read_d(c_t country){}

void read_e(c_t country){

	printf("<output>Good bye\n");

}
