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
/*		The part1.c contains the implementations of functions for the         */
/*		first part of the homework VI, which are used for calculate the       */
/*		character frequency of a given string.                                */
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
/*																			  */
/* void freq(char* str, int* fr)                                              */
/* -----------------------------                                              */
/*		str - array of string                                                 */
/*		fr  - array of frequency                                              */
/*                                                                            */
/* Description 												                  */
/* -----------                                                                */
/*		This function takes a string array and calculate the character        */
/*		frequency of a given string. That handle only the ASCII letters       */
/*		and digits. Any other characters such as punctuation marks and        */
/*      whitespaces will be handled as the same.                              */
/*																		      */
/*----------------------------------------------------------------------------*/
void freq(char* str, int* fr);

/*----------------------------------------------------------------------------*/
/*							Function Implementations                          */
/*----------------------------------------------------------------------------*/
/* Function freq                                                              */
/* -------------			                                                  */
/*		This function takes a string array and calculate the character        */
/*		frequency of a given string. That handle only the ASCII letters       */
/*		and digits. Any other characters such as punctuation marks and        */
/*      whitespaces will be handled as the same.                              */

void freq(char* str, int* fr){

	int i,j;						      /*              Counters            */
	
	for(j=0; str[j]!='\0'; j++){
	  
    } /* End of for-to find size for array */
	for(i=0; i<37; i++){
	
		fr[i]=0;
		
	} /* End of for-to zero for array */
	for(i=0; i<j; i++){
	
		switch(str[i]){
		
			case 'A' :	
			case 'a' : fr[0]++;	    break;
			case 'B' :	
			case 'b' : fr[1]++;	    break;
			case 'C' :	
			case 'c' : fr[2]++;	    break;
			case 'D' :	
			case 'd' : fr[3]++;	    break;
			case 'E' :	
			case 'e' : fr[4]++;	    break;
			case 'F' :	
			case 'f' : fr[5]++;	    break;
			case 'G' :	
			case 'g' : fr[6]++;	    break;
			case 'H' :	
			case 'h' : fr[7]++;	    break;
			case 'I' :	
			case 'i' : fr[8]++;	    break;
			case 'J' :	
			case 'j' : fr[9]++;     break;
			case 'K' :	
			case 'k' : fr[10]++;    break;
			case 'L' :	
			case 'l' : fr[11]++;	break;
			case 'M' :	
			case 'm' : fr[12]++;	break;
			case 'N' :	
			case 'n' : fr[13]++;	break;
			case 'O' :	
			case 'o' : fr[14]++;	break;
			case 'P' :	
			case 'p' : fr[15]++;	break;
			case 'Q' :	
			case 'q' : fr[16]++;	break;
			case 'R' :	
			case 'r' : fr[17]++;	break;
			case 'S' :	
			case 's' : fr[18]++;	break;
			case 'T' :	
			case 't' : fr[19]++;	break;
			case 'U' :	
			case 'u' : fr[20]++;	break;
			case 'V' :	
			case 'v' : fr[21]++;	break;
			case 'W' :	
			case 'w' : fr[22]+=1;	break;
			case 'X' :	
			case 'x' : fr[23]+=1;	break;
			case 'Y' :	
			case 'y' : fr[24]+=1;   break;
			case 'Z' :	
			case 'z' : fr[25]++;	break;
			case '0' : fr[26]++;	break;
			case '1' : fr[27]++;	break;
			case '2' : fr[28]++;	break;
			case '3' : fr[29]++;	break;
			case '4' : fr[30]++;	break;
			case '5' : fr[31]++;	break;
			case '6' : fr[32]++;	break;
			case '7' : fr[33]++;	break;
			case '8' : fr[34]++;	break;
			case '9' : fr[35]++;	break;
			default:   fr[36]++;	break;			
		}/* End of switch */
	} /* End of for */
	return;
} /* End of function */
/*----------------------------------------------------------------------------*/
/*								End of part1.c								  */
/*----------------------------------------------------------------------------*/
