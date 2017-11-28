#include <stdio.h>
#include <string.h>

typedef struct{

	char name[25];
	int pop;
	int area;
	int sold;
	char neig[10];

}c_t;

int main(){

	/*c_t country;*/
	int i,k,c,m;
	char ch;
	
	c_t count[100];
	
	printf("Make your choice:\n");
	scanf(" %c",&ch);
    
    while(ch=='a'){
    
    	i=0;
		while(i<100){
		
			scanf("%s",count[i].name);
			scanf("%d",&count[i].pop);	
			scanf("%d",&count[i].area);
			scanf("%d",&count[i].sold);

			printf("%s\n",count[i].name);		
		
			k=0;
			while(k<10){
			
				while(scanf("%s",count[k].neig)){

					if(strcmp(count[k].neig,"-1")!=0)
					{		
						k++;
					}
					if(strcmp(count[k].neig,"-1")==0){
			
						printf("Make your choice:\n");
						scanf(" %c",&ch);
				
	/*############################################################################*/
						while(ch=='a'){
							i++;
							
							scanf("%s",count[i].name);
							scanf("%d",&count[i].pop);	
							scanf("%d",&count[i].area);
							scanf("%d",&count[i].sold);

							printf("%s\n",count[i].name);		
	
							k=0;
							while(k<10){
		
								while(scanf("%s",count[k].neig)){

									if(strcmp(count[k].neig,"-1")!=0)
									{		
										k++;
									}
									if(strcmp(count[k].neig,"-1")==0){
		
										printf("Make your choice:\n");
										scanf(" %c",&ch);
										
										if(ch=='e'){
				
											printf("<output>Good bye\n");
					
										return 0;
										}
									}
								}
							}
						}
						if(ch=='e'){
				
							printf("<output>Good bye\n");
					
						return 0;
				
						}
					}		
				}
			}
		}
	}
	
	if(ch=='b'){
	
		for(m=0; count[m].name!='\0'; m++){
		
			for(c=0; count[c].neig!='\0'; c++){	
			}
		}	 	
	} 											
	return 0;
}
