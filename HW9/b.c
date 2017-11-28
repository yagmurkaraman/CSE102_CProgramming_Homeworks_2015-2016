#include <stdio.h>

typedef struct{

	char name[25];
	int pop;
	int area;
	int sold;
	char neig[10];

}cou_t;

int main(){

	cou_t country;
	
	read_cou(&country);


	return 0;
}


int read_cou(cou_t *c){

	scanf("%s",(*c).name);
	scanf("%d",&(*c).pop);
	scanf("%d",&(*c).area);
	scanf("%d",&(*c).sold);
	scanf("%s",(*c).neig);


	return 0;
}

