/*--------------------------------------------------------------------------*/
/* 																			*/
/*	HW09_131044041_Sultan_Ikbal 											*/
/*																			*/
/*	part1.c																	*/
/*---------																	*/
/* 	29/04/2016 tarihinde Sultan Ikbal tarafindan olusturulmustur.			*/
/* 																			*/
/*	Acıklama																*/
/*	-----------																*/
/* 		Kullanicidan bir karakter alir.										*/
/* 		Bu karakter a ise printName fonksiyonunu cagirir.					*/
/* 		Bu fonksiyon ulkenin adini,populasyonunu,askeri gucunu ,komsularinini alir.*/
/*		Kullanici -1 girene kadar komşu adi almaya devam eder.				*/
/*		Kullanici e girdiginde program sonlanir.							*/
/*--------------------------------------------------------------------------*/
/*					Icerik													*/
/*--------------------------------------------------------------------------*/ 

#include <stdio.h>
#include <string.h>

/* Bu struct bir ulkenin bilgilerini tutar.*/

typedef struct{
	char name[25];
	int population;
	int area;
	int soldierNumber;
	char *neighbor;

}country_t;


/* Fonksiyon Prototipi */ 

void printName(country_t *str);


int main(){

	country_t str[100];
	char ch;

	/* Kullanicidan bir karakter alir. */

	printf("Make your choice:\n");

	scanf(" %c",&ch);

	
	
	ch='a';

	while(ch!='e')	/* Kullanici e girdiğinde program sonlanir. */
	{
		if(ch=='a')
		{
			printName(str);
		}
	
		printf("Make your choice:\n");

		scanf(" %c",&ch);

	}

	printf("Good Bye\n"); 	

	
	return 0;

}

/* Bu fonksiyon bir ulkenin bilgilerini okur.*/

void printName(country_t *str)
{

	int i=0;
	char ch[3]="-1"; 


	scanf("%s",str->name);
	printf("%s\n",str->name);

	scanf("%d",&str->population);
	printf("%d\n",str->population);

	scanf("%d",&str->area);
	printf("%d\n",str->area);

	do
	{

		scanf("%s",(*str).neighbor);
		printf("%s\n",(*str).neighbor);
		i++;

	}	while(strcmp(str->neighbor,ch)!=0);		/* Kullanici -1 girene kadar devam eder. */
	
}

