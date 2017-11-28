#include <stdio.h>
#include <stdlib.h>
/*
typedef struct{

	float num1;
	double num3;
	double avg;

}str;
*/
int main(){

	int size, st, eachStruct;
	int intsize,floatsize,doublesize,longsize,charsize;
	int *a;
	int i,j,total,tempi,k,first;
	double tempd,avg;
	
	
	FILE *ifp;	
	
	a=(int *)malloc(10*sizeof(int));
	
    ifp=fopen("test.bin","rb");
    
    /*  -------MAIN--------- */
	intsize=sizeof(int);
	printf("%d\n",intsize);
	doublesize=sizeof(double);
	printf("%d\n",doublesize);
	floatsize=sizeof(float);
	printf("%d\n",floatsize);
	charsize=sizeof(unsigned char);
	printf("%d\n",charsize);
	longsize=sizeof(long long int);
	printf("%d\n",longsize);
	
	fseek(ifp,0,SEEK_END);
	size=ftell(ifp);
	printf("%d\n",size);
	fseek(ifp,0,SEEK_SET);
	
	st=(size/1000);
	printf("%d\n",st);
	eachStruct=(st-doublesize);
	printf("%d\n",eachStruct);
/*----------------------------------------------------------------------------*/

	i=0;
	j=0;
	total=0;
	while(i<=20){
	
		first=fread(&tempi,sizeof(int),1,ifp);
		i=i+intsize;
		j++;
		total=total+first;
		fseek(ifp,i,SEEK_SET);
	}	
	if((i/20)==1){
	
		avg=fread(&tempd,sizeof(double),1,ifp);
		if((total/j)==avg){
		
			for(k=0; k<j; k++)
			
				a[k]=2;		
		}
	}
	i=0;
	j=0;
	total=0;
	while(i<=20){
	
		first=fread(&tempi,sizeof(double),1,ifp);
		i=i+intsize;
		j++;
		total=total+first;
		fseek(ifp,i,SEEK_SET);
	}	
	if((i/20)==1){
	
		avg=fread(&tempd,sizeof(double),1,ifp);
		if((total/j)==avg){
		
			for(k=0; k<j; k++)
			
				a[k]=5;		
		}
	}
	i=0;
	j=0;
	total=0;
	while(i<=20){
	
		first=fread(&tempi,sizeof(float),1,ifp);
		i=i+intsize;
		j++;
		total=total+first;
		fseek(ifp,i,SEEK_SET);
	}	
	if((i/20)==1){
	
		avg=fread(&tempd,sizeof(double),1,ifp);
		if((total/j)==avg){
		
			for(k=0; k<j; k++)
			
				a[k]=4;		
		}
	}
	i=0;
	j=0;
	total=0;
	while(i<=20){
	
		first=fread(&tempi,sizeof(long long int),1,ifp);
		i=i+intsize;
		j++;
		total=total+first;
		fseek(ifp,i,SEEK_SET);
	}	
	if((i/20)==1){
	
		avg=fread(&tempd,sizeof(double),1,ifp);
		if((total/j)==avg){
		
			for(k=0; k<j; k++)
			
				a[k]=3;		
		}
	}
	i=0;
	j=0;
	total=0;
	while(i<=20){
	
		first=fread(&tempi,sizeof(unsigned char),1,ifp);
		i=i+intsize;
		j++;
		total=total+first;
		fseek(ifp,i,SEEK_SET);
	}	
	if((i/20)==1){
	
		avg=fread(&tempd,sizeof(double),1,ifp);
		if((total/j)==avg){
		
			for(k=0; k<j; k++)
			
				a[k]=1;		
		}
	}
/******************************************************************************/
	
	i=0;
	j=0;
	total=0;
	while(i<=20){
	
		first=fread(&tempi,sizeof(int),1,ifp);
		i=i+intsize;
		j++;
		total=total+first;
		fseek(ifp,i,SEEK_SET);
		
		
		
	}	
	if((i/20)==1){
	
		avg=fread(&tempd,sizeof(double),1,ifp);
		if((total/j)==avg){
		
			for(k=0; k<j; k++)
			
				a[k]=2;		
		}
	}
	
/*----------------------------------------------------------------------------*/	
		
		
	fclose(ifp);
		
	return *a;
}
