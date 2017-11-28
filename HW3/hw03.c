/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  HW03_141044016_Yagmur_Karaman                                             */
/*                                                                            */
/*  hw3.c                                                                     */
/*  ------                                                                    */
/*  Created on 06/03/2016 by Yagmur_Karaman                                   */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		The hw03.c contains the implementations of functions of the           */
/*		homework III, which are used for checks if the number is an odd,      */
/*		a factorial or a narcissistic number, depending on the user choice.   */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*								İncludes 								   	  */
/*----------------------------------------------------------------------------*/
#include <stdio.h>    /* printf, scanf definitions                            */
#include <math.h>     /* definition of pow                                    */
/*----------------------------------------------------------------------------*/
/*								#defines 									  */
/*----------------------------------------------------------------------------*/
#define TRUE 1
#define FALSE 0
/*----------------------------------------------------------------------------*/
/*							Function Prototypes								  */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  void menuWelcome(void)                                                    */
/*  ----------------                                                          */
/*  No takes variable.                                                        */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function prolog of program, no takes variable.                   */
/*----------------------------------------------------------------------------*/
void menuWelcome(void);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  void menuSelectOption(void)                                               */
/*  ----------------                                                          */
/*  No takes variable.                                                        */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function user interface of program, no takes variable.           */
/*		Indicate the operations which can be user.                            */
/*----------------------------------------------------------------------------*/
void menuSelectOption(void);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int oddNumberFunc(int number)                                             */
/*  -----------------                                                         */
/*		number - integer number entered by the user                           */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function checks the number for odd or not odd.                   */
/*----------------------------------------------------------------------------*/
int oddNumberFunc(int number);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int factNumberFunc(int number)                                            */
/*  ------------------                                                        */
/*		number - integer number entered by the user                           */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function checks the number for factorial or not factorial.       */
/*----------------------------------------------------------------------------*/
int factNumberFunc(int number);
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int narsNumberFunc(int number)                                            */
/*  ------------------                                                        */
/*		number - integer number entered by the user                           */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*		This function checks the number for narcissistic or not narcsisstic.  */
/*----------------------------------------------------------------------------*/
int narcNumberFunc(int number);
/*----------------------------------------------------------------------------*/
int main(){

	int number;           		/* input - the integer number entered by user */
	int selection;				/* selection of user one of 1-2-3             */
	char continueYesNo;			/* continue program of user                   */
	
	/*  call of function - display program login                              */
	menuWelcome();  

	/*  Get integer for program                                               */
	printf("Please enter a positive integer : ");
	scanf("%d", &number);
	
	while(number<=0){
	
		printf("The entered number is not positive.\n");
		printf("Dou you want to continue (y/n)? ");
		scanf("\n %c", &continueYesNo);
	
			if(continueYesNo=='Y' || continueYesNo=='y'){
			   
				printf("\nPlease enter a positive integer : ");
				scanf("%d", &number);
			} /* End of if(continueYesNo=='Y' || continueYesNo=='y') */
			
			else if(continueYesNo=='N' || continueYesNo=='n'){
			
				/* If user does not want to continue, exit.                   */
				printf("Good bye !\n");
			
				return FALSE;
			} /* End of else if(continueYesNo=='N' || continueYesNo=='n') */
			while(continueYesNo!='Y' && continueYesNo!='y' && continueYesNo!='N'
				  && continueYesNo!='n'){
			
				printf("Dou you want to continue (y/n)? ");
				scanf("\n %c", &continueYesNo);
			
			} /* while(continueYesNo!='Y' && ...) */

	} /* Enf of while(number<=0) */
	
	if(number>0)
	{
		/* If number>0, display the list of program selections.               */
		/* Call of function.                                                  */
		menuSelectOption();
		scanf("%d", &selection);
		
		
		while(TRUE){
	
			switch(selection){
		
				/* Calling function by choice.                                */
				case 1:
					oddNumberFunc(number);
					break;
				case 2:
					factNumberFunc(number);
					break;
				case 3:
					narcNumberFunc(number);
					break;
				
				/* Display warning when choice another selection.             */
				default:
					printf("\nPlease select a option between 1-3 !\n");
			
			} /* End of switch(selection) */
			
			/* When end of operation, ask to user want to continue or exit.   */			
			printf("Dou you want to continue (y/n)? ");
			scanf("\n %c", &continueYesNo);
		
			if(continueYesNo=='Y' || continueYesNo=='y'){
				
				/* If user want to continue, get a number again.              */
				printf("\nPlease enter a positive integer : ");
				scanf("%d", &number);
					
			} /* End of if(continueYesNo=='Y' || continueYesNo=='y') */
			
			else if(continueYesNo=='N' || continueYesNo=='n'){
			
				/* If user does not want to continue, exit.                   */
				printf("Good bye !\n");
			
				return FALSE;
			} /* End of else if(continueYesNo=='N' || continueYesNo=='n') */
			while(continueYesNo!='Y' && continueYesNo!='y' 
					&& continueYesNo!='N' && continueYesNo!='n'){
			
				printf("Dou you want to continue (y/n)? ");
				scanf("\n %c", &continueYesNo);
			} /* while(continueYesNo='Y' && ...) */
		} /* End of while(1) */
	} /* End of if(number>0) */
	return FALSE;
} /* End of main */

/*----------------------------------------------------------------------------*/
/*							Function Implementations                          */
/*----------------------------------------------------------------------------*/
/* Function menuWelcome                                                       */
/* --------------------                                                       */
/*		This function prolog of program.                                      */

void menuWelcome(void){

	/* Login of program.                                                      */
	printf("\n****************************************************\n");
	printf("*                    WELCOME!                      *\n");
	printf("*  This program checks whether the given number    *\n");
	printf("* is an odd, a factorial or a narcissistic number  *\n");
	printf("*                                                  *\n");
	printf("****************************************************\n\n");
	
	return;
}
/*----------------------------------------------------------------------------*/
/* Function menuSelectOption                                                  */
/* -------------------------                                                  */
/*		This function user interface of program, no takes variable.           */
/*		Indicate the operations which can be user.                            */

void menuSelectOption(void){

	/* List of selections of program.	                                      */
	printf("Which property would you like to check?\n");
	printf("1)Odd number\n");
	printf("2)Factorial number\n");
	printf("3)Narcissistic number\n");
	printf("Please enter(1/2/3): ");

	return;
}
/*----------------------------------------------------------------------------*/
/* Function oddNumberFunc                                                     */
/* ----------------------                                                     */
/*		This function checks the number for odd or not odd.                   */

int oddNumberFunc(int number){

	
	if(number%2==1){
	
	/* If remainder of number division to 2, 1- It is a odd number.           */
		printf("%d is an odd number !\n",number);	
	} /* End of if(number%2==1) */
	else{ 
	
		printf("%d is not an odd number !\n",number);
	} /* End of else */
	return FALSE;
} /* End of oddNumberFunc(int number) */

/*----------------------------------------------------------------------------*/
/* Function factNumberFunc                                                    */
/* -----------------------                                                    */
/*		This function checks the number for factorial or not factorial.       */
	
int factNumberFunc(int number){

	int factResult;						/* result of factorial calculate      */					
	int factCount;						/* count of loop of factorial         */
	
	factResult=1;
	for(factCount=1; factResult<number; factCount++){
	
		factResult *= factCount;
			
		if(factResult==number){
		
			printf("%d is a factorial number !\n",number);
		} /* End of if(factResult==number) */
		else if(factResult>number){
		
			printf("%d is not a factorial number !\n",number);
		} /* End of else if(factResult>number) */
			
	} /* End of for(factCount=1; factResult<number; factCount++) */
	if(number==1){
		
		printf("%d is a factorial number !\n",number);
	} /* End of if(number==1) */
	return FALSE;
} /* End of factNumberFunc(int number) */

/*----------------------------------------------------------------------------*/
/* Function narcNumberFunc                                                    */
/* -----------------------                                                    */
/*		This function checks the number for narcissistic or not narcsisstic   */
	
int narcNumberFunc(int number){

	int tempNarc;						/* temporary variable of number       */
	int	narcCount;						/* count of loop of function          */
	int remainderNarc;					/* remainder part of number from %10  */
	int narcResult;						/* result of narcssistic calculate    */

    /* Calculating the number of digits */	 
	tempNarc=number;
	for(narcCount=0; tempNarc!=0; narcCount++){ 
		
		tempNarc/=10; 			  	     	  		
	} /* End of for(narcCount=0; tempNarc!=0; narcCount++) */
	
	tempNarc=number;
	while(tempNarc!=0){
		   	
		remainderNarc=tempNarc%10;
		narcResult+=pow(remainderNarc, narcCount);
		tempNarc/=10;		   	
	} /* End of while(tempNarc!=0) */
		   	
	if(narcResult==number){
		   	
		printf("%d is narcissistic number !\n",number);
	} /* End of if(narcResult==number) */
	else{
		   	
		printf("%d is not narcissistic number !\n",number);
	} /* End of else */ 
	return FALSE;
} /* End of narcNumberFunc(int number) */
/*----------------------------------------------------------------------------*/
/*								End of hw03.c                                 */
/*----------------------------------------------------------------------------*/			
