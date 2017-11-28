#include <stdio.h>
#include <stdlib.h>

int main(){

	int size, st, eachStruct;
	int intsize,floatsize,doublesize,longsize,charsize;
	int *a,i;
	
	FILE *ifp;	
	
	str st_t[1000];
	
	
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
		
	fclose(ifp);
		
	return *a;
}
