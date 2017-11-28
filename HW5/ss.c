/*----------------------------------------------------------------------------*/
/*                                                                            */
/* HW05_141044016_Yagmur_Karaman                                              */
/*                     												          */
/* main.c                                                                     */
/* ------										                              */
/* Created on 04/04/2016 by Yagmur Karaman                                    */
/*																	          */
/* Description                                                                */
/* ------------                                                               */
/*		The main.c contains the implementations of functions                  */
/*		for the homework V, which are use that performs basic operations      */
/*		of a chess simulator which will take commands and arguments           */
/*		from the user, executes the commands and return the result.           */   
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*								İncludes									  */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*								#defines                                      */
/*----------------------------------------------------------------------------*/
#define VALID 1
#define INVALID 0
/*----------------------------------------------------------------------------*/
/*							Function Prototypes                               */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/* int initBoard(char *board)                                                 */
/* --------------------------                                				  */						  
/*		board - board of the chess                                            */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will return the start position to board.                */
/*																		      */
/*----------------------------------------------------------------------------*/
int initBoard(char *board);
/*----------------------------------------------------------------------------*/
/* void printBoard(char *board)                                               */
/* ----------------------------								             	  */
/*		board - board of the chess                                            */
/* 																			  */
/* Description                                                                */
/* -----------                                                                */
/*		This function will print the current state of the board as show       */
/*		above.																  */
/*                                                                            */
/*----------------------------------------------------------------------------*/
void printBoard(char *board);
/*----------------------------------------------------------------------------*/
/* int isPieceMovable(char *board)                                            */
/* -------------------------------                                            */
/*		board - board of the chess                                            */
/*															                  */
/* Return                                                                     */
/* ------                                                                     */
/*		1 on success                                                          */
/*		0 on error                                                            */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		It asks the user the source and target positions and check            */
/*		whether the piece in the source cell can be movable to the            */
/*		target cell.                                                          */
/*																			  */
/*----------------------------------------------------------------------------*/
int isPieceMovable(char *board);
/*----------------------------------------------------------------------------*/
/* void getPosition(char *col, int *row)                                      */
/* -------------------------------------                                      */
/*		col - column of the board                                             */
/*		row - row of the board                                                */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will take the row and column values of a                */
/*		specific cell on the board.                                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/
void getPosition(char *col, int *row);
/*----------------------------------------------------------------------------*/
/* int isValidCell(char *col, int *row)                                       */
/* ------------------------------------                                       */
/*		col - column of the board                                             */
/*		row - row of the board                                                */
/*                                                                            */
/* Return                                                                     */
/* ------                                                                     */
/*		1 on success                                                          */
/*		0 on error                                                            */
/*																		      */
/* Description                                                                */
/* -----------                                                                */
/*		This function will check whether the given cell is valid              */  
/*		according to the board sizes and returns 1 if it is valid,            */
/*		otherwise 0.													      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int isValidCell(char col, int row);
/*----------------------------------------------------------------------------*/
/* int isKnightMovable(char *board, char sourceCol, int sourceRow,            */
/* char targetCol, int targetRow)                                             */
/* ------------------------------                                             */
/*		board     - board of the chess         		                          */
/*		sourceCol - column of source location                                 */
/*		sourceRow - row of source location                                    */
/*		targetCol - column of target location                                 */
/*		targetRow - row of target location                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will check whether a knight can move from source        */
/*		cell to the target cell according to the rules of the game.           */
/*																			  */
/*----------------------------------------------------------------------------*/
int isKnightMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow);
/*----------------------------------------------------------------------------*/
/* int isRookMovable(char *board, char sourceCol, int sourceRow,              */
/* char targetCol, int targetRow)                                             */
/* ------------------------------                                             */
/*		board     - board of the chess         		                          */
/*		sourceCol - column of source location                                 */
/*		sourceRow - row of source location                                    */
/*		targetCol - column of target location                                 */
/*		targetRow - row of target location                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will check whether a rook can move from source          */
/*		cell to the target cell according to the rules of the game.           */
/*																			  */
/*----------------------------------------------------------------------------*/
int isRookMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow);
/*----------------------------------------------------------------------------*/
/* int isKingMovable(char *board, char sourceCol, int sourceRow,              */
/* char targetCol, int targetRow)                                             */
/* ------------------------------                                             */
/*		board     - board of the chess         		                          */
/*		sourceCol - column of source location                                 */
/*		sourceRow - row of source location                                    */
/*		targetCol - column of target location                                 */
/*		targetRow - row of target location                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will check whether a king can move from source          */
/*		cell to the target cell according to the rules of the game.           */
/*																			  */
/*----------------------------------------------------------------------------*/
int isKingMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow);
/*----------------------------------------------------------------------------*/
/* int isQueenMovable(char *board, char sourceCol, int sourceRow,             */
/* char targetCol, int targetRow)                                             */
/* ------------------------------                                             */
/*		board     - board of the chess         		                          */
/*		sourceCol - column of source location                                 */
/*		sourceRow - row of source location                                    */
/*		targetCol - column of target location                                 */
/*		targetRow - row of target location                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will check whether a queen can move from source         */
/*		cell to the target cell according to the rules of the game.           */
/*																			  */
/*----------------------------------------------------------------------------*/
int isQueenMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow);
/*----------------------------------------------------------------------------*/
/* int isBishopMovable(char *board, char sourceCol, int sourceRow,            */
/* char targetCol, int targetRow)                                             */
/* ------------------------------                                             */
/*		board     - board of the chess         		                          */
/*		sourceCol - column of source location                                 */
/*		sourceRow - row of source location                                    */
/*		targetCol - column of target location                                 */
/*		targetRow - row of target location                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will check whether a bishop can move from source        */
/*		cell to the target cell according to the rules of the game.           */
/*																			  */
/*----------------------------------------------------------------------------*/
int isBishopMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow);
/*----------------------------------------------------------------------------*/
/* int isPawnMovable(char *board, char sourceCol, int sourceRow,              */
/* char targetCol, int targetRow)                                             */
/* ------------------------------                                             */
/*		board     - board of the chess         		                          */
/*		sourceCol - column of source location                                 */
/*		sourceRow - row of source location                                    */
/*		targetCol - column of target location                                 */
/*		targetRow - row of target location                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will check whether a pawn can move from source          */
/*		cell to the target cell according to the rules of the game.           */
/*																			  */
/*----------------------------------------------------------------------------*/
int isPawnMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow);
/*----------------------------------------------------------------------------*/
/* int whichIndex(char col, int row)                                          */
/* ------------------------------                                             */
/*		col - column of the board                		                      */
/*		row - row of the board                                                */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		This function will find the index of source cell and target cell.     */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int whichIndex(char col, int row);

void emptyBuffer()
{
	while ( getchar() != '\n' );
}
/*----------------------------------------------------------------------------*/
/*					     Function Implementations                             */
/*----------------------------------------------------------------------------*/
/* Function initBoard                                                         */
/* ------------------                                				          */						  
/*		This function will return the start position to board.                */

int initBoard(char *board)
{
	int i;

	board[0]='r';
	board[1]='n';
	board[2]='b';
	board[3]='q';
	board[4]='k';
	board[5]='b';
	board[6]='n';
	board[7]='r';
	
	for(i=8; i<16; i++){
		
		board[i]='p';
	}
	for(i=16; i<48; i++){
	
		
		board[i]=' ';
	
	}
	board[56]='R';
	board[57]='N';
	board[58]='B';
	board[59]='Q';
	board[60]='K';
	board[61]='B';
	board[62]='N';
	board[63]='R';
	
	for(i=48; i<56; i++){
	
		board[i]='P';
	}
	return 0;
}
/*----------------------------------------------------------------------------*/
/* Function printBoard                                                        */
/* -------------------      								             	  */
/*		This function will print the current state of the board as show       */
/*		above.																  */

void printBoard(char *board){
	
	int i,j,k;
	int boyut;
	
	initBoard(board);
	boyut=64;	
	
	i=0;
	j=8;
	printf("  a b c d e f g h\n");
	printf("  - - - - - - - -\n");
	printf("%d|",j--);
	
	for(k=1; i<boyut; k++){
	
		if(i==0 || i==8 || i==16 || i==24 || i==32 || i==40 || i==48 || i==56){
		
		
			printf("%c",board[i]);
		
		}
		else{
		
			printf(" %c",board[i]);
		}
		if(k%(8)==0){
		
			if(j!=0){
			
			printf("|\n");
			printf("%d|",j--);
			}
		
		}
		i++;
	}	
	printf("|\n");
	printf("  - - - - - - - -\n");		

	return;
}
/*----------------------------------------------------------------------------*/
/* Function getPosition                                                       */
/* -------------------------------------                                      */
/*		This function will take the row and column values of a                */
/*		specific cell on the board.                                           */

void getPosition(char *col, int *row){

	scanf(" %c",col);
	scanf("%d",row);
	
	return;

}
/*----------------------------------------------------------------------------*/
/* Function isValidCell                                                       */
/* ------------------------------------                                       */
/*		This function will check whether the given cell is valid              */  
/*		according to the board sizes and returns 1 if it is valid,            */
/*		otherwise 0.													      */

int isValidCell(char col, int row){

	if(col=='a' || col=='b' || col=='c' || col=='d' || col=='e' || col=='f' || col=='g'){
	
		return VALID;
	}
	else if(row==8 || row==7 || row==6 || row==5 || row==4 || row==3 || row==2 || row==1){
	
		return VALID;
	}
	else
		return INVALID;
			
	return 0;	
}
/*----------------------------------------------------------------------------*/
/* Function isPieceMovable                                                    */
/* -------------------------------                                            */
/*		It asks the user the source and target positions and check            */
/*		whether the piece in the source cell can be movable to the            */
/*		target cell.                                                          */

int isPieceMovable(char *board){

	int i,result;
	char sourceCol;
	int sourceRow;
	char targetCol;
	int targetRow;
	
	getPosition(&sourceCol,&sourceRow);
	isValidCell(sourceCol,sourceRow);
	getPosition(&targetCol,&targetRow);
	isValidCell(targetCol,targetRow);
	i=whichIndex(sourceCol,sourceRow);
	
		switch(board[i]){
	
			case 'p':
			case 'P':
					result=isPawnMovable(board, sourceCol, sourceRow, targetCol, targetRow);
					break; 
			case 'r':
			case 'R':
					result=isRookMovable(board, sourceCol, sourceRow, targetCol, targetRow);
					break;
			case 'n':
			case 'N':
					result=isKnightMovable(board, sourceCol, sourceRow, targetCol, targetRow);
					break;
			case 'b':
			case 'B':
		            result=isBishopMovable(board, sourceCol, sourceRow, targetCol, targetRow);
					break;
			case 'q':
			case 'Q':
					result=isQueenMovable(board, sourceCol, sourceRow, targetCol, targetRow);
					break;
			case 'k':
			case 'K':
					result=isKingMovable(board, sourceCol, sourceRow, targetCol, targetRow);
					break;
		}
	return result;
}
/*----------------------------------------------------------------------------*/
/* Function isKnightMovable                                                   */
/* ------------------------                                                   */
/*		This function will check whether a knight can move from source        */
/*		cell to the target cell according to the rules of the game.           */

int isKnightMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow)
{

    if(targetCol==sourceCol+1 && targetRow==sourceRow+2) return 1;
	if(targetCol==sourceCol+1 && targetRow==sourceRow-2) return 1;	
	if(targetCol==sourceCol-1 && targetRow==sourceRow+2) return 1;
	if(targetCol==sourceCol-1 && targetRow==sourceRow-2) return 1;
	if(targetCol==sourceCol+2 && targetRow==sourceRow+1) return 1;
	if(targetCol==sourceCol-2 && targetRow==sourceRow+1) return 1;
	if(targetCol==sourceCol+2 && targetRow==sourceRow-1) return 1;
	if(targetCol==sourceCol-2 && targetRow==sourceRow-1) return 1;
	
	else
		return 0;

	return 1;
}
/*----------------------------------------------------------------------------*/
/* Function isRookMovable                                                     */
/* ------------------------                                                   */
/*		This function will check whether a rook can move from source          */
/*		cell to the target cell according to the rules of the game.           */

int isRookMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow)
{
    return 1;
}
/*----------------------------------------------------------------------------*/
/* Function isKingMovable                                                     */
/* ------------------------                                                   */
/*		This function will check whether a king can move from source          */
/*		cell to the target cell according to the rules of the game.           */
 
int isKingMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow)
{

	if(targetCol==sourceCol+1 && targetRow==sourceRow) return 1;
	if(targetCol==sourceCol-1 && targetRow==sourceRow) return 1;
	if(targetCol==sourceCol && targetRow==sourceRow+1) return 1;
	if(targetCol==sourceCol && targetRow==sourceRow-1) return 1;
	if(targetCol==sourceCol+1 && targetRow==sourceRow+1) return 1;
	if(targetCol==sourceCol+1 && targetRow==sourceRow-1) return 1;
	if(targetCol==sourceCol-1 && targetRow==sourceRow+1) return 1;
	if(targetCol==sourceCol-1 && targetRow==sourceRow-1) return 1;

    else
        return 0;
       
	return 1;
    
}
/*----------------------------------------------------------------------------*/
/* Function isQueenMovable                                                    */
/* ------------------------                                                   */
/*		This function will check whether a queen can move from source         */
/*		cell to the target cell according to the rules of the game.           */

int isQueenMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow)
{
	return 1;
}
/*----------------------------------------------------------------------------*/
/* Function isBishopMovable                                                   */
/* ------------------------                                                   */
/*		This function will check whether a bishop can move from source        */
/*		cell to the target cell according to the rules of the game.           */

int isBishopMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow)
{
    return 1;
}
/*----------------------------------------------------------------------------*/
/* Function isPawnMovable                                                     */
/* ------------------------                                                   */
/*		This function will check whether a pawn can move from source          */
/*		cell to the target cell according to the rules of the game.           */

int isPawnMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow)
{
	return 1;
}
int whichIndex(char col,int row){

	int index;
	
	if(col=='a'){
		
		switch(row){
		
			case 8: index=0; break;
			case 7: index=8; break;
			case 6: index=16; break;
			case 5: index=24; break;
			case 4: index=32; break;
			case 3: index=40; break; 
			case 2: index=48; break;
			case 1: index=56; break;
		}
	}
	else if(col=='b'){
	
	   switch(row){
		
			case 8: index=1; break;
			case 7: index=9; break;
			case 6: index=17; break;
			case 5: index=25; break;
			case 4: index=33; break;
			case 3: index=41; break; 
			case 2: index=49; break;
			case 1: index=57; break;
		}
	}
	else if(col=='c'){
	
		switch(row){
		
			case 8: index=2; break;
			case 7: index=10; break;
			case 6: index=18; break;
			case 5: index=26; break;
			case 4: index=34; break;
			case 3: index=42; break; 
			case 2: index=50; break;
			case 1: index=58; break;
		}
	}
	else if(col=='d'){
	
		switch(row){
		
			case 8: index=3; break;
			case 7: index=11; break;
			case 6: index=19; break;
			case 5: index=27; break;
			case 4: index=35; break;
			case 3: index=43; break; 
			case 2: index=51; break;
			case 1: index=59; break;
		}
	}
	else if(col=='e'){
	
		switch(row){
		
			case 8: index=4; break;
			case 7: index=12; break;
			case 6: index=20; break;
			case 5: index=28; break;
			case 4: index=36; break;
			case 3: index=44; break; 
			case 2: index=52; break;
			case 1: index=60; break;
		}
	}
	else if(col=='f'){
	
		switch(row){
		
			case 8: index=5; break;
			case 7: index=13; break;
			case 6: index=21; break;
			case 5: index=29; break;
			case 4: index=37; break;
			case 3: index=45; break; 
			case 2: index=53; break;
			case 1: index=61; break;
		}
	}
	else if(col=='g'){
	
		switch(row){
		
			case 8: index=6; break;
			case 7: index=14; break;
			case 6: index=22; break;
			case 5: index=30; break;
			case 4: index=38; break;
			case 3: index=46; break; 
			case 2: index=54; break;
			case 1: index=62; break;
		}
	}
	else if(col=='h'){
	
	    switch(row){
		
			case 8: index=7; break;
			case 7: index=15; break;
			case 6: index=23; break;
			case 5: index=31; break;
			case 4: index=39; break;
			case 3: index=47; break; 
			case 2: index=55; break;
			case 1: index=63; break;
		}
	}

    return index;
}
