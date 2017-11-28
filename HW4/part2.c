/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  HW04_141044016_Yagmur_Karaman                                             */
/*                                                                            */
/*  part2.c                                                                   */
/*  -------                                                                   */
/*  Created on 23/03/2016 by Yagmur_Karaman                                   */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		The part2.c contains the implementations of functions for the second  */
/*		part of Homework IV, which are used for get a integer from the user   */
/*		and print out a simple ASCII art. The program will not print          */
/*		out any message and wait input from the user. Beside the number to be */
/*		printed, the user will enter the width of the border and the          */
/*		character to be used while printing.                 				  */
/*																			  */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*								Includes									  */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
/*----------------------------------------------------------------------------*/
/*								#defines									  */
/*----------------------------------------------------------------------------*/
#define INVALID_NUM 0
#define VALID_NUM 1
/*----------------------------------------------------------------------------*/
/*							Function Prototypes								  */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*																			  */
/*  void getInputs(int* num, int* borderWidth, char* borderChar)              */
/*  ------------------------------------------------------------              */
/*		num         - number of get from the user for printing				  */
/*		borderWidth - width of the border 									  */
/*		borderChar  - character to be used number                             */
/*                                                                            */
/*  	return void                                                           */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function takes the number, the border width and the character    */
/*		to be used while printing.                                            */
/*                                                                            */
/*----------------------------------------------------------------------------*/
void getInputs(int* num, int* borderWidth, char* borderChar);
/*----------------------------------------------------------------------------*/
/*                               											  */
/*  int printNumber(int num, int borderWidth, char borderChar)                */
/*  ----------------------------------------------------------                */
/*		num         - number of get from the user for printing				  */
/*		borderWidth - width of the border 									  */
/*		borderChar  - character to be used number							  */
/*                                                                            */
/*  Return          														  */
/*  ------                                                                    */
/*		1 on valid                                                            */
/*		0 on invalid                                                          */
/*                                                                            */
/*  Description                                                               */
/*	-----------                                                               */
/*		This function print the number, the border width and the character.   */
/* 																			  */
/*----------------------------------------------------------------------------*/
int printNumber(int num, int borderWidth, char borderChar);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int firstLine(int num, char borderChar)                                   */
/*  ---------------------------------------                                   */
/*		num         - number of get from the user for printing 				  */
/*		borderChar  - character to be used number							  */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function seperate the first line of number.                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int firstLine(int num, char borderChar);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int firstLine(int num, char borderChar)                                   */
/*  ---------------------------------------                                   */
/*		num         - number of get from the user for printing 				  */
/*		borderChar  - character to be used number							  */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function seperate the first line of number.                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int secondLine(int num, char borderChar);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int firstLine(int num, char borderChar)                                   */
/*  ---------------------------------------                                   */
/*		num         - number of get from the user for printing 				  */
/*		borderChar  - character to be used number							  */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function seperate the second line of number.                     */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int thirdLine(int num, char borderChar);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int firstLine(int num, char borderChar)                                   */
/*  ---------------------------------------                                   */
/*		num         - number of get from the user for printing 				  */
/*		borderChar  - character to be used number							  */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function seperate the third line of number.                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int fourthLine(int num, char borderChar);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int firstLine(int num, char borderChar)                                   */
/*  ---------------------------------------                                   */
/*		num         - number of get from the user for printing 				  */
/*		borderChar  - character to be used number							  */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function seperate the fourth line of number.                     */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int fifthLine(int num, char borderChar);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int firstLine(int num, char borderChar)                                   */
/*  ---------------------------------------                                   */
/*		num         - number of get from the user for printing 				  */
/*		borderChar  - character to be used number							  */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function seperate the fifth line of number.                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*						Function Implementations							  */
/*----------------------------------------------------------------------------*/
/*  Function getInputs                                                        */
/*  ------------------                                                        */
/*		This function takes the number, the border width and the character    */
/*		to be used while printing.											  */
void getInputs(int* num, int* borderWidth, char* borderChar){

	scanf("%d",num);
	scanf("%d",borderWidth);
	scanf(" %c",borderChar);
    
	   printNumber(*num, *borderWidth, *borderChar);
}
/*----------------------------------------------------------------------------*/
/*  Function printNumber                                                      */
/*  --------------------                                                      */
/*		This function print the number, the border width and the character.   */		
int printNumber(int num, int borderWidth, char borderChar){

	int temp;
	int temp1;
	int temp2;
	int temp3;
	int temp4;
	int i;
	int k;
	
	if(num<0 || num>99999){
	    
	    return (INVALID_NUM);
	}
	if(num>=0 && num<=9){
		
		k=1;
		while(k<=borderWidth){
			for(i=0; i<7+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
			}
		    k++;
		    printf("\n");
		   
		}
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("       ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
	
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			firstLine(num,borderChar);
					
		for(i=0; i<borderWidth; i++){
			printf("%c",borderChar);
		}
			printf("\n");
		
		for(i=0; i<borderWidth; i++){
			printf("%c",borderChar);
		}
			secondLine(num,borderChar);
		
		for(i=0; i<borderWidth; i++){
			printf("%c",borderChar);
		}
			printf("\n");
		
		for(i=0; i<borderWidth; i++){
			printf("%c",borderChar);
		}
			thirdLine(num,borderChar);
		
		for(i=0; i<borderWidth; i++){
			printf("%c",borderChar);
		}
			printf("\n");
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			fourthLine(num,borderChar);
		
		for(i=0; i<borderWidth; i++){
			printf("%c",borderChar);
		}
			printf("\n");
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			fifthLine(num,borderChar);
		
		for(i=0; i<borderWidth; i++){
			printf("%c",borderChar);
		}
			printf("\n");
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("       ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
		
		k=1;
		while(k<=borderWidth){
		
			for(i=0; i<7+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
			}
			k++;
			printf("\n");
		
		}
		
	}

	else if(num>=10 && num<=99){
	
		k=1;
		while(k<=borderWidth){
		
			for(i=0; i<14+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
			}
			k++;
			printf("\n");
		}

		temp=num;
		temp1=num;
	
		temp=temp/10;
		temp1=temp1%10;

		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);

		}
			printf("              ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
			
		}
			printf("\n");
				
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
		firstLine(temp,borderChar);
		firstLine(temp1,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
		secondLine(temp,borderChar);
		secondLine(temp1,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
		thirdLine(temp,borderChar);
		thirdLine(temp1,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
	
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
		fourthLine(temp,borderChar);
		fourthLine(temp1,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
		fifthLine(temp,borderChar);
		fifthLine(temp1,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("              ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
		k=1;
		while(k<=borderWidth){
			for(i=0; i<14+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
			
			}
			k++;
			printf("\n");
		}
		
	}	
	else if(num>=100 && num<=999){
	
		k=1;
		while(k<=borderWidth){
			for(i=0; i<21+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
		
			}
			k++;
			printf("\n");
		}		
		temp=num;
		temp1=num;
		temp2=num;
		
		temp=num/100;
		temp1=(num%100)/10;
		temp2=num%10;
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("                     ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		firstLine(temp,borderChar);
		firstLine(temp1,borderChar);
		firstLine(temp2,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");

		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		secondLine(temp,borderChar);
		secondLine(temp1,borderChar);
		secondLine(temp2,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);

		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		thirdLine(temp,borderChar);
		thirdLine(temp1,borderChar);
		thirdLine(temp2,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		fourthLine(temp,borderChar);
		fourthLine(temp1,borderChar);
		fourthLine(temp2,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		fifthLine(temp,borderChar);
		fifthLine(temp1,borderChar);
		fifthLine(temp2,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("                     ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
			
		k=1;
		while(k<=borderWidth){
			for(i=0; i<21+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
			}
		    k++;
		    printf("\n");
		}
	}
	
	else if(num>=1000 && num<=9999){

		k=1;
		while(k<=borderWidth){
			for(i=0; i<28+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);

			}
			k++;
			printf("\n");
		}
		
		temp=num;
		temp1=num;
		temp2=num;
		temp3=num;
		
		temp=temp/1000;
		temp1=(temp1/100)%10;
		temp2=(temp2%100)/10;
		temp3=temp3%10;
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("                            ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		firstLine(temp,borderChar);
		firstLine(temp1,borderChar);
		firstLine(temp2,borderChar);
		firstLine(temp3,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		secondLine(temp,borderChar);
		secondLine(temp1,borderChar);
		secondLine(temp2,borderChar);
		secondLine(temp3,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		thirdLine(temp,borderChar);
		thirdLine(temp1,borderChar);
		thirdLine(temp2,borderChar);
		thirdLine(temp3,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		fourthLine(temp,borderChar);
		fourthLine(temp1,borderChar);
		fourthLine(temp2,borderChar);
		fourthLine(temp3,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		fifthLine(temp,borderChar);
		fifthLine(temp1,borderChar);
		fifthLine(temp2,borderChar);
		fifthLine(temp3,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n"); 
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("                            ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
			
		k=1;
		while(k<=borderWidth){
			for(i=0; i<28+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
			}
		    k++;
		    printf("\n");
		}
	}
	else if(num>=10000 && num<=99999){

		k=1;
		while(k<=borderWidth){
			for(i=0; i<35+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
			}
			k++;
			printf("\n");
		}
		temp=num;
		temp1=num;
		temp2=num;
		temp3=num;
		temp4=num;
		
		temp=temp/10000;
		temp1=(temp1/1000)%10;
		temp2=(temp2/100)%10;
		temp3=(temp3/10)%10;
		temp4=(temp4%10);
	
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("                                   ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
				
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		firstLine(temp,borderChar);
		firstLine(temp1,borderChar);
		firstLine(temp2,borderChar);
		firstLine(temp3,borderChar);
		firstLine(temp4,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		secondLine(temp,borderChar);
		secondLine(temp1,borderChar);
		secondLine(temp2,borderChar);
		secondLine(temp3,borderChar);
		secondLine(temp4,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		thirdLine(temp,borderChar);
		thirdLine(temp1,borderChar);
		thirdLine(temp2,borderChar);
		thirdLine(temp3,borderChar);
		thirdLine(temp4,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		fourthLine(temp,borderChar);
		fourthLine(temp1,borderChar);
		fourthLine(temp2,borderChar);
		fourthLine(temp3,borderChar);
		fourthLine(temp4,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
		fifthLine(temp,borderChar);
		fifthLine(temp1,borderChar);
		fifthLine(temp2,borderChar);
		fifthLine(temp3,borderChar);
		fifthLine(temp4,borderChar);
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		} 
			printf("\n");
		
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("                                   ");
			
		for(i=0; i<borderWidth; i++){	
			printf("%c",borderChar);
		}
			printf("\n");
			
		k=1;
		while(k<=borderWidth){
			for(i=0; i<35+(2*borderWidth); i++)
			{	
				printf("%c",borderChar);
			}
		    k++;
		    printf("\n");
		}
	}
	else{
	    
	    return (INVALID_NUM);
	}
	return (VALID_NUM);	
}
/*----------------------------------------------------------------------------*/
/*  Function firstLine                                                        */
/*  ------------------														  */
/*		This function seperate the first line of number.                      */
int firstLine(int num, char borderChar){
	
	if(num==2 || num==3 || num==5 || num==6 || num==7 || num==8 || num==9
		|| num==0){
			
		printf("  %c%c%c  ",borderChar,borderChar,borderChar);
	}
	else if(num==1){
		
		printf("   %c   ",borderChar);
	}
	else if(num==4){
		
		printf("  %c %c  ",borderChar,borderChar);
	}
	return 0;
}
/*----------------------------------------------------------------------------*/
/*  Function secondLine                                                       */
/*  ------------------														  */
/*		This function seperate the second line of number.                     */
int secondLine(int num, char borderChar){

	if(num==1){
		
		printf("  %c%c   ",borderChar,borderChar);
	}
	else if(num==2 || num==3 || num==7){
		
		printf("    %c  ",borderChar);
	}
	else if(num==4 || num==8 || num==9 || num==0){
		
		printf("  %c %c  ",borderChar,borderChar);
	}
	else if(num==5 || num==6){
		
		printf("  %c    ",borderChar);
	}
	return 0;
}
/*----------------------------------------------------------------------------*/
/*  Function thirdLine                                                        */
/*  ------------------														  */
/*		This function seperate the third line of number.                      */
int thirdLine(int num, char borderChar){

 	if(num==2 || num==4 || num==5 || num==6 || num==8 || num==9){
		
		printf("  %c%c%c  ",borderChar,borderChar,borderChar);
	}		
	else if(num==1){
		
		printf("   %c   ",borderChar);
	}
	else if(num==3){
		
		printf("   %c%c  ",borderChar,borderChar);
	}
	else if(num==7){
		
		printf("    %c  ",borderChar);
	}
	else if(num==0){
		
		printf("  %c %c  ",borderChar,borderChar);
	}
	return 0;
}
/*----------------------------------------------------------------------------*/
/*  Function fourthLine                                                       */
/*  ------------------														  */
/*		This function seperate the fourth line of number.                     */
int fourthLine(int num, char borderChar){

	if(num==1){
		
		printf("   %c   ",borderChar);
	}
	else if(num==2){
		
		printf("  %c    ",borderChar);
	}
	else if(num==3 || num==4 || num==5 || num==7 || num==9){
		
		printf("    %c  ",borderChar);
	}
	else if(num==6 || num==8 || num==0){
		
		printf("  %c %c  ",borderChar,borderChar);
	}
	return 0;
}
/*----------------------------------------------------------------------------*/
/*  Function fifthLine                                                        */
/*  ------------------														  */
/*		This function seperate the fifth line of number.                      */
int fifthLine(int num, char borderChar){

	if(num==1 || num==2 || num==3 || num==5 || num==6 || num==8 || num==9
		|| num==0){
			
		printf("  %c%c%c  ",borderChar,borderChar,borderChar);
	}
	else if(num==4 || num==7){
		
		printf("    %c  ",borderChar);
	}
	return 0;
}
/*----------------------------------------------------------------------------*/
/*								End of part2.c								  */
/*----------------------------------------------------------------------------*/
