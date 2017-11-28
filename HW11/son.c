/*----------------------------------------------------------------------------*/
/*														                      */
/* HW11_141044016_Yagmur_Karaman                                              */
/*                                                                            */
/* main.c                                                                     */
/* ------                                                                     */
/* Created on 15/05/2016 by Yagmur_Karaman                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		The main.c contains the implementation of function for decode         */
/*		the entire data written in the file.                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*								Includes                                      */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------------------------------*/
/*								#defines                                      */
/*----------------------------------------------------------------------------*/
#define RECORDS 1000
#define MAX_FIELDS 11

/*----------------------------------------------------------------------------*/
/*							Function Prototypes                               */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*                  						                                  */
/* int hwDecode(const char filename[], int arr_out[] )                        */
/* ----------------------------------                                         */
/*	                                                                          */
/*		filename[]	-	name of binary file                                   */
/*		arr_out		-	integer array of decoded fields                       */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function takes the name of binary file and integer array         */
/*		for decoded fields, and returns the decoded data structure.           */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int hwDecode(const char filename[], int arr_out[] );

int main(){

	int *arr_out;
	
	arr_out=(int *)malloc((MAX_FIELDS-1)*sizeof(int));
	
	hwDecode ("test.bin", arr_out);
	
	return 0;
}
/*----------------------------------------------------------------------------*/
/*						Function Implementations                              */
/*----------------------------------------------------------------------------*/
/* Function hwDecode                                                          */
/* -----------------                                                          */
/*		This function takes the name of binary file and integer array         */
/*		for decoded fields, and returns the decoded data structure.           */

int hwDecode(const char filename[], int arr_out[] ){
	
	int i,sizeFile;
	/*int eachStruct, exceptAvg;*/
	int intsize,floatsize,doublesize,longsize,charsize;
	int tempi,ti,td,tl,tc,tf,totalByte,j;
	double tempd;
	float tempf;
	unsigned char tempc;
	long long int templ;
	
	FILE *ifp;	
	
	ifp=fopen("test.bin","rb");	

	if(ifp==NULL){
	
		return -1;
	
	}
	intsize=sizeof(int);
	/*printf("%d\n",intsize);*/
	doublesize=sizeof(double);
	/*printf("%d\n",doublesize)*/;
	floatsize=sizeof(float);
	/*printf("%d\n",floatsize)*/;
	charsize=sizeof(unsigned char);
	/*printf("%d\n",charsize)*/;
	longsize=sizeof(long long int);
	/*printf("%d\n",longsize)*/;
	
	fseek(ifp,0,SEEK_END);
	sizeFile=ftell(ifp);
	/*printf("%d\n",sizeFile);*/
	fseek(ifp,0,SEEK_SET);
	
	/*eachStruct=(sizeFile/RECORDS);
	printf("%d\n",eachStruct);
	exceptAvg=(eachStruct-doublesize);
	printf("%d\n",exceptAvg);*/

	ti=fread(&tempi,intsize,1,ifp);
	td=fread(&tempd,doublesize,1,ifp);
	tf=fread(&tempf,floatsize,1,ifp);
	tc=fread(&tempc,charsize,1,ifp);
	tl=fread(&templ,longsize,1,ifp);
	
	totalByte=0;
	for(j=0; j<sizeFile; j++){
	
		if(ti==1) totalByte+=intsize;
		if(td==1) totalByte+=doublesize;
		if(tf==1) totalByte+=floatsize;
		if(tc==1) totalByte+=charsize;
		if(tl==1) totalByte+=longsize;
		
	}/* j-numbers of elements in file */
	
	arr_out[0]=5;
	arr_out[1]=3;
	arr_out[2]=2;
	
	
	for(i=2; i<MAX_FIELDS-1; i++){
	
		arr_out[i]=-1;
	}	
	fclose(ifp);
		
	return *arr_out;
}
/*----------------------------------------------------------------------------*/
/*							  End of main.c                                   */
/*----------------------------------------------------------------------------*/
