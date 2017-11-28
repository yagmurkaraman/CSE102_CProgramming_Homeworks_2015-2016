/*----------------------------------------------------------------------------*/
/*																              */
/* HW06_141044016_Yagmur_Karaman                                              */
/* 																		      */
/* part3.c                                                                    */
/* -------                                                                    */
/* Created on 08/04/2016 by Yagmur_Karaman                                    */
/* 																		      */
/* Description                                                                */
/* -----------                                                                */
/*		The part3.c contains the implementations of functions for the         */
/*		first part of the homework VI, which are used for counts the          */
/*		occurrences of a substring in the a given string using the matcher    */
/*		function that wrote in part2.                                         */ 
/*																		      */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*								Includes                                      */
/*----------------------------------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------------------------------*/
/*							Function Prototypes                               */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*																	          */
/* int count(char* str, char* substr)                                         */
/* ----------------------------------                                         */
/*		str     - string of given                                             */
/*		substr  - substring of string                                         */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function takes a string for calculate counts the occurrences     */
/*		of a substring in the a given string.                                 */
/*																			  */
/*----------------------------------------------------------------------------*/
int count(char* str, char* substr);

/*----------------------------------------------------------------------------*/
/*							Function Implementations                          */
/*----------------------------------------------------------------------------*/
/*														                      */
/* Function count                                                             */
/* --------------                                                             */
/*		This function takes a string for calculate counts the occurrences     */
/*		of a substring in the a given string.                                 */

int count(char* str, char* substr){

	int i,j;					/* counters                                   */
	int sizeStr,sizeSubstr;		/* size of str and substr                     */
	int firstOcc;				/* first occurrence of the substr in the sub  */
	int count;					/* counts the occurrences of a substring 
								   in the a given string                      */		
 
	for(sizeStr=0; str[sizeStr]!='\0'; sizeStr++){
	
	/* Find size of Str */
	}
	for(sizeSubstr=0; substr[sizeSubstr]!='\0'; sizeSubstr++){
	
	/* Find size of Substr */
	}
	if(sizeStr<sizeSubstr){
	
		return 0;
	}
	else if(str==NULL){
		return 0;
	}
	else if(substr==NULL){
		return 0;
	}
	
	i=0;
	count=0;
	while(i<sizeStr){
	    
	    j=0;   
		if(str[i]==substr[j]){
		    
	  	firstOcc=i;

    		while(str[firstOcc]==substr[j] && j<sizeSubstr){
    		
        		firstOcc=firstOcc+2;
        		j=j+2;
        		
        		if(j>=sizeSubstr){
        		    
                    count++;     		    
    		    }/* End of if(j<=...)... */
    		}/* End of while(str[firstOcc]==substr...)... */
		}/* End of str[i]==substr[j] */
		i++;
	}/* Enf of while(i<sizeStr) */
    return count;     
}/* EOF */
/*----------------------------------------------------------------------------*/
/*								End of part3.c								  */
/*----------------------------------------------------------------------------*/
