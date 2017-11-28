/*----------------------------------------------------------------------------*/
/*                                                                            */
/* HW01_141044016_Yagmur_Karaman                                              */
/*                                                                            */
/* hw1part1_141044016.c                                                       */
/* ------------                                                               */
/* Created on 18/02/2016 by Yagmur_Karaman                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*	The hw1part1_141044016.c contains the implementations of functions        */
/*	for the first part of the homework I, which are used for calculate        */
/*	the last grade.															  */
/*                                                                            */
/* Inputs                                                                     */
/* ------                                                                     */
/*	First, second, third midterm weights and grades.                          */
/*	First, second homework weights and grades.                                */
/*	Final exam weight and grade.                                              */
/*                                                                            */
/* Outputs                                                                    */
/* -------                                                                    */
/*	Effect of total grade and grade of final.                                 */  
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include <stdio.h>

int 
main(void)
{
	int firstMdtrmWeight;          	   /* input - weight of first midterm     */
	int secondMdtrmWeight;	       	   /* input - weight of second midterm    */
	int thirdMdtrmWeight;	      	   /* input - weight of third midterm     */
	int firstHmwrkWeight;	       	   /* input - weight of first homework    */
	int secondHmwrkWeight;	       	   /* input - weight of second homework   */
	int finalExamWeight;	       	   /* input - weight of final exam        */
	double firstMdtrmGrade;	       	   /* input - grade of first midterm      */
	double secondMdtrmGrade;	       /* input - grade of second midterm     */
	double thirdMdtrmGrade;	       	   /* input - grade of third midterm      */
	double firstHmwrkGrade;	       	   /* input - grade of first homework     */
	double secondHmwrkGrade;	       /* input - grade of second homework    */
	double finalExamGrade;	       	   /* input - grade of final exam         */
	double finalGrade;	       		   /* output - grade of final             */
	
	/* Get the weights and grades of overall grades of the students.*/
	printf("Please enter the 1. midterm weight:");
	scanf("%d", &firstMdtrmWeight);
	
	printf("Please enter the 2. midterm weight:");
	scanf("%d", &secondMdtrmWeight);
	
	printf("Please enter the 3. midterm weight:");
	scanf("%d", &thirdMdtrmWeight);
	
	printf("Please enter the 1. homework weight:");
	scanf("%d", &firstHmwrkWeight);
	
	printf("Please enter the 2. homework weight:");
	scanf("%d", &secondHmwrkWeight);
	
	printf("Please enter the final exam weight:");
	scanf("%d", &finalExamWeight);
	
	printf("Please enter the 1. midterm grade:");
	scanf("%lf", &firstMdtrmGrade);
	
	printf("Please enter the 2. midterm grade:");
	scanf("%lf", &secondMdtrmGrade);
	
	printf("Please enter the 3. midterm grade:");
	scanf("%lf", &thirdMdtrmGrade);
	
	printf("Please enter the 1. homework grade:");
	scanf("%lf", &firstHmwrkGrade);
	
	printf("Please enter the 2. homework grade:");
	scanf("%lf", &secondHmwrkGrade);
	
	printf("Please enter the final exam grade:");
	scanf("%lf", &finalExamGrade);
	
	/* Compute the total effect of the weights and grades. */
	/* Compute the final grade over 100.  */
	finalGrade = ((firstMdtrmWeight*firstMdtrmGrade)+
	    (secondMdtrmWeight*secondMdtrmGrade)+
        (thirdMdtrmWeight*thirdMdtrmGrade)+
		(firstHmwrkWeight*firstHmwrkGrade)+
		(secondHmwrkWeight*secondHmwrkGrade)+
		(finalExamWeight*finalExamGrade))/100;
	
    /* Display the weight of final grade. */
	printf("Your final grade is: %f\n", finalGrade);
	
	return 0;
	
}
/*----------------------------------------------------------------------------*/
/*                     End of hw1part1_141044016.c                            */
/*----------------------------------------------------------------------------*/
