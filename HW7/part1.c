/*----------------------------------------------------------------------------*/
/* 																	          */
/* HW07_141044016_Yagmur_Karaman                                              */
/*  																          */
/* part1.c                                                                    */
/* -------                                                                    */
/* Created on 13/04/2016 by Yagmur_Karaman                                    */
/* 																	          */
/* Description                                                                */
/* -----------                                                                */
/*		The part1.c contains the implementations of recursive functions       */
/*		find to situation for being palindrome or not of string.              */
/*																		      */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*								Includes								      */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------------------------------*/
/*							Function Prototypes                               */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*																              */
/* int strSize(char *str)													  */
/* ----------------------                                                     */
/*                                                                            */
/*		str - string of program for find palindrome or not                    */
/*																	          */
/* Description                                                                */
/* -----------                                                                */
/*		This function find size of string.                                    */
/*																			  */
/*----------------------------------------------------------------------------*/
int strSize(char *str);

/*----------------------------------------------------------------------------*/
/*                                             								  */
/* int charControl(char *str,int left,int right)                              */
/* ---------------------------------------------                              */
/* 																              */
/*		str 	- 	string of program for find palindrome or not              */
/*		left 	- 	head index of string                                      */
/*		right 	- 	tail index of string                                      */
/*																		      */
/* Return                                                                     */
/* ------                                                                     */
/*																	          */
/*		0 on error                                                            */
/*		1 on success                                                          */
/*												                              */
/* Description                                                                */
/* -----------                                                                */
/*		This function takes the string, left index, right index and           */
/*		finds of string's character in head and tail, and compare for         */
/*		same or different.                                                    */
/*																              */
/*----------------------------------------------------------------------------*/
int charControl(char *str,int left,int right);

/*----------------------------------------------------------------------------*/
/*																			  */
/* int isPalindrome(char *str)                                                */
/* ---------------------------                                                */
/*																              */
/*		str 	- 	string of program for find palindrome or not              */
/*																		      */
/* Return                                                                     */
/* ------                                                                     */
/*																              */
/*		0 on error                                                            */
/*		1 on success                                                          */
/* 																	          */
/* Description                                                                */
/* -----------                                                                */
/*		This function takes string and control for some base cases, and       */
/*		send to charControl function.                                         */
/*                    							                              */
/*----------------------------------------------------------------------------*/
int isPalindrome(char *str);

int main(){

	char str;
	
	isPalindrome("a ba");
}
/*----------------------------------------------------------------------------*/
/*						 Function Implementations							  */
/*----------------------------------------------------------------------------*/
/* Function isPalindrome                                                      */
/* ---------------------                                                      */
/*		This function takes string and control for some base cases, and       */
/*		send to charControl function.										  */

int isPalindrome(char * str){

	int size,i;
	
	if(str==NULL)
		return 0;
		
	else if(str[0]=='\0')
		return 0;
		
	size=strSize(str);
	
	if(size==1)
		return 0;	
	
	charControl(str,0,size-1);
	
	return 1;
}
/*----------------------------------------------------------------------------*/
/* Function charControl                                                       */
/* --------------------                                                       */
/*		This function takes the string, left index, right index and           */
/*		finds of string's character in head and tail, and compare for         */
/*		same or different.                                                    */

int charControl(char *str, int left, int right){

	if(left<right){
	
		if(((str[right]>='A' && str[right]<='Z') || 
			(str[right]>='a') && (str[right]<='z')) &&
			((str[left]>='A' && str[left]<='Z') ||
			(str[left]>='a' && str[left]<='z'))){

			if(((str[left]-str[right])==0) || (abs(str[left]-str[right]))==32){

				charControl(str,left+1,right-1);	
			}
			else
				return 0;		
		
		}	
		else if(((str[right]<'A' || str[right]>'Z') &&
				 (str[right]<'a' || str[right]>'z')) &&
				 ((str[left]<'A' || str[left]>'Z') &&
				 (str[left]<'a' || str[left]>'z'))){

				charControl(str,left+1,right-1);
		}
		else if(((str[right]<'A' || str[right]>'Z') &&
			     (str[right]<'a' || str[right]>'z')) &&
				 ((str[left]>='A' && str[left]<='Z') ||
		 		 (str[left]>='a' && str[left]<='z'))){

				charControl(str,left,right-1);
		}
		else if(((str[right]>='A' && str[right]<='Z') ||
				 (str[right]>='a' && str[right]<='z')) &&
				 ((str[left]<'A' || str[left]>'Z') &&
				 (str[left]<'a' || str[left]>'z'))){

				charControl(str,left+1,right);
		}
	}		
	return 1;
}
/*----------------------------------------------------------------------------*/
/* Function strSize                   								          */
/* ----------------                                                           */
/*		This function find size of string. 									  */

int strSize(char *str){

	if(*str){
	
		return strSize(str+1)+1;	
	}
}
/*----------------------------------------------------------------------------*/
/*								End of part1.c                                */
/*----------------------------------------------------------------------------*/		
