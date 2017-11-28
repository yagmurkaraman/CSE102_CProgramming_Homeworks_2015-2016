#include <stdio.h>
/*
struct country{

	char name[25];
	int pop;
	double area;
	int sold;
	int neig;

}c_t[100];
*/
c_t 
get_country(void)
{
	c_t country;	
	
	int result,i;

	i=0;
	while(i<100){

		result=scanf("%s%d%lf%d%d",c_t[i].name,&c_t[i].pop,&c_t[i].area,&c_t[i].sold,&c_t[i].neig);
	
		if(result==1){
	
			return country;
			i++;
		}	
		else{
		
			
			return country;
			i++;		
		}
	}
	return 0;

}
