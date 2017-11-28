/*----------------------------------------------------------------------------*/
/*									   	                                      */
/* HW07_141044016_Yagmur_Karaman                                              */
/*																		      */
/* part2.c                                                                    */
/* -------                                                                    */
/* Created on 14/04/2016 by Yagmur_Karaman                                    */
/*															                  */
/* Description                    			                                  */
/* -----------                                                                */
/*		The part2.c contains the implementations of recursive function        */
/*		that simulates hitting an air hockey disc and checks whether          */
/*		the disc will be in the goal or not.                                  */
/*																	          */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*								Includes 			                          */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------------------------------------------------------------------*/
/*							Function Prototypes                               */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*												                              */
/* int kickDisc(double wallWidth, double wallHeight, double ballCenterX,      */
/* double kickAngle, double ballRadius, double goalWidth)                     */
/* ----------------------------                                               */
/*                                                                            */
/*		wallWidth	-	width of air hockey table                             */
/*		wallHeight	-	height of air hockey table                            */
/*		ballCenterX -	x distance of center of ball                          */
/*		kickAngle	-	kick angle of ball                                    */
/*		ballRadius	-	radius of ball                                        */
/*		goalWidth	-	width of goal                                         */
/*															                  */
/* Return                                                                     */
/* ------                                                                     */
/*																		      */
/*		1 on success                                                          */
/*		0 on error                                                            */
/*															                  */
/* Description                                                                */
/* -----------                                                                */
/*		This function checks parameters and send other function.              */
/*																	          */
/*----------------------------------------------------------------------------*/  	
int kickDisc(double wallWidth, double wallHeight, double ballCenterX, double
kickAngle, double ballRadius, double goalWidth);

/*----------------------------------------------------------------------------*/
/*												                              */
/* int controlGoal(double wallWidth, double wallHeight, double ballCenterX,   */
/* double kickAngle, double ballRadius, double goalWidth, double zigzagHeight)*/
/* ----------------------------                                               */
/*                                                                            */
/*		wallWidth		-	width of air hockey table                         */
/*		wallHeight		-	height of air hockey table                        */
/*		ballCenterX 	-	x distance of center of ball                      */
/*		kickAngle		-	kick angle of ball                                */
/*		ballRadius		-	radius of ball                                    */
/*		goalWidth		-	width of goal                                     */
/*		zigzagHeight	-	height of each zigzag                             */
/*															                  */
/* Return                                                                     */
/* ------                                                                     */
/*																		      */
/*		1 on success                                                          */
/*		0 on error                                                            */
/*															                  */
/* Description                                                                */
/* -----------                                                                */
/*		This function checks checks whether the disc will be in the goal      */
/*		or not.											                      */
/*																	          */
/*----------------------------------------------------------------------------*/ 
int controlGoal(double wallWidth, double wallHeight, double ballCenterX, double
kickAngle, double ballRadius, double goalWidth,double zigzagHeight);

/*----------------------------------------------------------------------------*/
/*												                              */
/* int reflection(int angle)                                                  */
/* -------------------------                                                  */
/*															                  */
/*		angle	-	angle by produce                                          */
/*																	          */
/* Description                                                                */
/* -----------                                                                */
/*		This function produces random angle.                                  */
/*												                              */
/*----------------------------------------------------------------------------*/
int reflection(int angle);

int main(){

	kickDisc(10, 26, 2, 42, 1, 2);

}
/*----------------------------------------------------------------------------*/
/*																		      */
/* Function kickDisc                                                          */
/* -----------------                                                          */
/*		This function checks parameters and send other function.              */

int kickDisc(double wallWidth, double wallHeight, double ballCenterX, double
kickAngle, double ballRadius, double goalWidth){


	if((2*ballRadius)>goalWidth) 
		return 0;
	
	else if((wallWidth<=0) || (wallHeight<=0) || (ballRadius<=0))
		return 0;
	
	else if((wallWidth-ballCenterX)<0)
		return 0;

	if(kickAngle>90){
		kickAngle=rand()%5 + (90-fmod(kickAngle,90));
	}
	else
		kickAngle=rand()%5+kickAngle;
			
	controlGoal(wallWidth,wallHeight,ballCenterX,kickAngle,
											ballRadius,goalWidth,0);

	return 0;
}
/*----------------------------------------------------------------------------*/
/*													                          */
/* Function controlGoal                                                       */
/* --------------------                                                       */
/*		This function checks checks whether the disc will be in the goal      */
/*		or not.                                                               */

int controlGoal(double wallWidth, double wallHeight, double ballCenterX, 
double kickAngle, double ballRadius, double goalWidth,double zigzagHeight){

	double remainDist,lastCenterX;
	
	zigzagHeight=tan(kickAngle)*(wallWidth-ballCenterX)+zigzagHeight;	

	if(zigzagHeight<=0){
	
		return 0;
	}	
	if(zigzagHeight<(wallHeight-ballRadius) && zigzagHeight>0){
	
		kickAngle=rand()%5 + fmod(kickAngle,180);
		controlGoal(wallWidth, wallHeight, 0, kickAngle, ballRadius, 
											goalWidth, zigzagHeight);
	}
	if(zigzagHeight>(wallHeight-ballRadius)){
	
		remainDist=zigzagHeight-(wallHeight-ballRadius);
		lastCenterX=tan(90-kickAngle)*remainDist;
		
		if((lastCenterX>=(wallWidth-goalWidth)/2) && 
			(lastCenterX>=((wallWidth-goalWidth)/2)+goalWidth)){
		
			return 1;
		}
		else
		
		   return 0;	   
	}
	return 1;
	
}
/*----------------------------------------------------------------------------*/
/*	   	                          											  */
/* Function reflection                                                        */
/* -------------------                                                        */
/*		This function produces random angle.                                  */

int reflection(int angle){
	
	srand(angle);
	
	return rand();	
}
/*----------------------------------------------------------------------------*/
/*								End of part2.c                                */
/*----------------------------------------------------------------------------*/
