/*----------------------------------------------------------------------------*/
/*																              */
/* HW06_141044016_Yagmur_Karaman                                              */
/* 																		      */
/* part1.c                                                                    */
/* -------                                                                    */
/* Created on 08/04/2016 by Yagmur_Karaman                                    */
/* 																		      */
/* Description                                                                */
/* -----------                                                                */
/*		The part2.c contains the implementations of functions for the         */
/*		first part of the homework VI, which are used for for finding         */
/*		substring(s) in a given string.		                                  */
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
/* char* matcher(char* haystack, char* needle)                                */
/* -------------------------------------------                                */
/*		haystack  -  string of given                                          */
/*		needle    -  substring of string                                      */
/*															                  */
/* Description                                                                */
/* -----------                                                                */
/*		This function takes a string for finding substring(s) in a given      */
/*		string.                                                               */
/*                                                                            */
/*----------------------------------------------------------------------------*/
char* matcher(char* haystack, char* needle);

/*----------------------------------------------------------------------------*/
/*							Function Implementations                          */
/*----------------------------------------------------------------------------*/
/* Function matcher                                                           */
/* ----------------     	                                                  */
/*		This function takes a string for finding substring(s) in a given      */
/*		string.                                                               */

char* matcher(char* haystack, char* needle){
	
	int i,j;				/* counters                                       */
	int sizeHay,sizeNee;    /* size of haystack and needle                    */
	int firstOcc;			/* first occurrence of the needle in the haystack */
   	
	for(sizeHay=0; haystack[sizeHay]!='\0'; sizeHay++){
				/* find size haystack */
	}
	for(sizeNee=0; needle[sizeNee]!='\0'; sizeNee++){
				/* find size needle */
	}
	if(sizeHay<sizeNee){
		return NULL;
	}
	else if(haystack==NULL){ /* Array boş ise NULL */
		return NULL;
	}
	else if(needle==NULL){ /* Array boş ise NULL */
		return NULL;
	}
	i=0;
	while(i<sizeHay){
	    
	    j=0;
		if(haystack[i]==needle[j] && haystack[i]!='\0'){
		    
	  	firstOcc=i; 
        
    		while(haystack[firstOcc]==needle[j] && j<l) {
    		
        		firstOcc=firstOcc+2;
        		j=j+2;

        		if(j>=sizeNee){
                    return (&haystack[i]);
                          		    
    		    }/* End of if(j>=...)... */
    		}/* End of while(haystack[firs...])...*/
		}/* End of if(haystack[i]==needle[j]...) */
		i++;
	}/* End of while(i<sizeHay) */
    return NULL;      
} /* End of function */
/*----------------------------------------------------------------------------*/
/*								End of part2.c								  */
/*----------------------------------------------------------------------------*/
