/*----------------------------------------------------------------------------*/
/*                                                                            */
/* HW01_141044016_Yagmur_Karaman                                              */
/*                                                                            */
/* hw1part2_141044016.c                                                       */
/* ------------                                                               */
/* Created on 20/02/2016 by Yagmur_Karaman                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*	The hw1part2_141044016.c contains the implementations of functions for    */
/*	the second part of the homework I, which are used for calculate the how   */
/*	many days user has lived in Earth and calculate with variables get from   */
/*	user how old he would be if he were lived in another planet.              */
/*                                                                            */
/* Inputs                                                                     */
/* ------                                                                     */
/*	Current year, month and day.                                              */
/*	Birth year, month and day.                                                */
/*	Total hours in a day, total days in a month, total months in a year in    */
/*	Planet.                                                                   */
/*																			  */
/* Outputs                                                                    */
/* -------                                                                    */
/*	Total days in lived in Earth.                                             */
/*	Total time in lived in Planet.                                            */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include <stdio.h>

int 
main(void)
{
	
	int currentYear;              /* input - year of current                  */
	int currentMonth;			  /* input - month of current                 */
	int currentDay;				  /* input - day of current                   */
	int birthYear;				  /* input - year of birth                    */
	int birthMonth;				  /* input - month of birth                   */
	int birthDay;				  /* input - day of birth                     */
	int totalDaystoNow;			  /* output - total days to current           */
	int totalDaystoBirth;		  /* output - total days to birth             */
	int livedDaysinEarth;		  /* output - total days in lived in Earth    */
	int livedHoursinEarth;		  /* output - total hours in lived in Earth   */
	int livedHoursinPlanet;		  /* output - total hours in lived in Planet  */
	int hoursinYearinPlanet;	  /* output - total hours in year in Planet   */
	int hoursinMonthinPlanet;	  /* output - total hours in month in Planet  */
	int livedYearsinPlanet;		  /* output - total years in lived in Planet  */
	int remainderMonthsinPlanet;  /* output - remainder months in Planet      */
	int remainderDaysinPlanet;	  /* output - remainder days in Planet        */
	int hoursinDayinPlanet;		  /* input - total hours in a day in Planet   */
	int daysinMonthinPlanet;	  /* input - total days in a month in Planet  */
	int monthsinYearinPlanet;	  /* input - total months in a year in Planet */
	
	/* Get the current year, current month and current day. */
	printf("Please enter the current date.\n");
	
	printf("Year:");
	scanf("%d",&currentYear);
	
	printf("Month:");
	scanf("%d",&currentMonth);
	
	printf("Day:");
	scanf("%d",&currentDay);
	
	/* Compute the total days to current. a year = 365 days. a month = 30 days*/
	totalDaystoNow = currentYear*365+(currentMonth-1)*30+currentDay;
	
	/* Get the birth year, birth month and birth day. */
	printf("Please enter your birthday.\n");
	
	printf("Year:");
	scanf("%d",&birthYear);
	
	printf("Month:");
	scanf("%d",&birthMonth);
	
	printf("Day:");
	scanf("%d",&birthDay);
	
	/* Compute the total days to birth. */
	totalDaystoBirth = birthYear*365+(birthMonth-1)*30+birthDay;
	
	/* Compute the total days in lived in Earh. */
	livedDaysinEarth = totalDaystoNow-totalDaystoBirth;
	
	/* Compute the total hours in lived in Earth. (Soon to be used.)*/
	livedHoursinEarth = livedDaysinEarth*24;
	
	/* Display the total days in lived in Earth. */
	printf("You have lived %d days.\n", livedDaysinEarth);
	
	/* PLANET */
	
	/* Get the total hours in a day, total days in a month and total months 
	in a year in Planet. */
	printf("Please enter about the time of another planet\n");
	printf("How many hours is a day?");
	scanf("%d",&hoursinDayinPlanet);
	printf("How many days is a month?");
	scanf("%d",&daysinMonthinPlanet);
	printf("How many months is a year?");
	scanf("%d",&monthsinYearinPlanet);	
	
	/* Compute the total hours in lived in Planet. */
	livedHoursinPlanet = livedHoursinEarth;
	
	/* Compute the total hours in a year in Planet. */
	hoursinYearinPlanet = (hoursinDayinPlanet*daysinMonthinPlanet*
	monthsinYearinPlanet);
	
	/* Compute the total hours in a month in Planet. */
	hoursinMonthinPlanet = hoursinDayinPlanet*daysinMonthinPlanet;
	
	/* Compute the total years in lived in Planet. */
	livedYearsinPlanet = livedHoursinPlanet/hoursinYearinPlanet;
	
	/* Value of total years in lived in Planet is float but result of the 
	compute is integer, so we compute fractional portion of total years for 
	find remainder months in lived in Planet. */
	remainderMonthsinPlanet = (livedHoursinPlanet/hoursinMonthinPlanet)-
	(livedYearsinPlanet*monthsinYearinPlanet);

	/* For find the remainder days in lived in another Planet, compute the 
	similar calculations as above. */
	remainderDaysinPlanet = (livedHoursinPlanet/hoursinDayinPlanet)-
	(livedYearsinPlanet*daysinMonthinPlanet*monthsinYearinPlanet
	+remainderMonthsinPlanet*daysinMonthinPlanet);
	
	/* Display the years, months and days in lived in another Planet. */
	printf("If you lived in a planet where a day is %d hours, a month is %d" 
	       " days and a year is %d months: you were %d years, %d months"
	       " and %d days old\n", hoursinDayinPlanet, daysinMonthinPlanet, 
	       monthsinYearinPlanet,livedYearsinPlanet,remainderMonthsinPlanet,
           remainderDaysinPlanet);
		
	return 0;

}
/*----------------------------------------------------------------------------*/
/*              End of hw1part2_141044016.c                                   */
/*----------------------------------------------------------------------------*/
