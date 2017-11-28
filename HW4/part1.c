/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  HW04_141044016_Yagmur_Karaman                                             */
/*                                                                            */
/*  part1.c                                                                   */
/*  -------                                                                   */
/*  Created on 21/03/2016 by Yagmur_Karaman                                   */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		The part1.c contains the implementations of functions for the first   */
/*		part of Homework IV, which are used for get an integer from user as   */
/*		degree and another integer that defines the first n elements of       */
/*		the series.                 				                          */
/*																			  */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*								Includes									  */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
/*----------------------------------------------------------------------------*/
/*								#defines									  */
/*----------------------------------------------------------------------------*/
#define PI 3.14
/*----------------------------------------------------------------------------*/
/*							Function Prototypes								  */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*																			  */
/*  double cosine(int degree, int n);										  */
/*  ---------------------------------										  */
/*		degree - degree for used to calculate serie.                          */
/*		n	   - first n elements of the serie.                               */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function calculate the taylor serie for cosinus.                 */
/*                                                                            */
/*----------------------------------------------------------------------------*/
double cosine(int degree, int n);
/*----------------------------------------------------------------------------*/
/*																			  */
/*  double sine(int degree, int n);							    			  */
/*  ---------------------------------										  */
/*		degree - degree for used to calculate serie.                          */
/*		n	   - first n elements of the serie.                               */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function calculate the taylor serie for sinus.                   */
/*                                                                            */
/*----------------------------------------------------------------------------*/
double sine(int degree, int n);
/*----------------------------------------------------------------------------*/
/*																			  */
/*  void getInputs(int* degree, int* n, int* exit);                           */
/*  -----------------------------------------------                           */
/*		degree - degree for used to calculate serie.                          */
/*		n	   - first n elements of the serie.                               */
/*		exit   - exit variable.                                               */
/*                                                                            */
/*  Description                                                               */
/*	-----------                                                               */
/*		This function gets the inputs of program for the calculate Taylor     */
/*		series to cosine and sine.                                            */
/*																			  */
/*----------------------------------------------------------------------------*/
void getInputs(int* degree, int* n, int* exit);

/*----------------------------------------------------------------------------*/
/*					    Function Implementations							  */
/*----------------------------------------------------------------------------*/
/*  Function getInputs                                                        */
/*  ------------------                                                        */
/*		This function gets the inputs of program for the calculate Taylor     */
/*		series to cosine and sine. 											  */
void getInputs(int* degree, int* n, int* exit){

    int flag;
    char select;

    flag=0;
	flag=scanf("%d %d",degree,n);
    
    if(flag==0){
        
        scanf("%c",&select);
        if(select=='e' || select=='E'){
            
            *exit=1;
        }
        else{
            
            *exit=0;
        }
    }
    else
    {
	    *exit=0;
    }
    return;
}
/*----------------------------------------------------------------------------*/
/*  Function cosine                                                           */
/*  ---------------                                                           */
/*		This function calculate the taylor serie for cosinus. 				  */
double cosine(int degree, int n){

	double result;
	double sign;
	double termX;
	double fact;
	int j;
	double x;
	int i;
	
	degree=degree%360;

	x=degree*(PI/180);
	
	result=1;
	sign=1;
	termX=1;
	fact=1;

	j=1;
	for(i=0; i<n-1; i++){

		sign=sign*(-1);
		termX=termX*(x*x);
		fact=fact*(j*(j+1));
	
		result=result+((sign*termX)/fact);
		j=j+2;
	}
	printf("cos(%d) where n is %d = %.4f\n",degree,n,result);
	if(degree>90 && degree<270){
	    
	    return (-result);
	}
	else{
        
        return result;

	}
}
/*----------------------------------------------------------------------------*/
/*  Function sine                                                             */
/*  ---------------                                                           */
/*		This function calculate the taylor serie for sinus. 				  */
double sine(int degree, int n){

	double result;
	double sign;
	double termX;
	double fact;
	int j;
	double x;
	int i;
	
	degree=degree%360;
	
	x=degree*(PI/180);
	
	result=x;
	sign=1;
	termX=x;
	fact=1;
	
	j=2;
	for(i=0; i<n-1; i++){
	
		sign=sign*(-1);
		termX=termX*(x*x);
		fact=fact*(j*(j+1));
		
		result=result+((sign*termX)/fact);
		j=j+2;
	}
	printf("sin(%d) where n is %d = %.4f\n",degree,n,result);
    if(degree>270 && degree<360){
        
        return (-result);
    }
    else{
        
        return result;
    }
}
/*----------------------------------------------------------------------------*/
/*								End of part1.c								  */
/*----------------------------------------------------------------------------*/
