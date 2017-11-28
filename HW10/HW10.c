/*----------------------------------------------------------------------------*/
/*                                                                            */
/* HW10_141044016_Yagmur_Karaman                                              */
/*                                                                            */
/* hw10.c                                                                     */
/* ------                                                                     */
/* Created on 04/05/2016 by Yagmur Karaman                                    */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		The hw10.c is a simple database management system which reads         */ 
/*		information about a department in a university such as students,      */
/*		lectures, and professors and outputs a file which includes            */
/*		some summary information.                                             */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*								  Includes                                    */
/*----------------------------------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------------------------------*/
/*								  #defines                                    */
/*----------------------------------------------------------------------------*/
#define LEN_CHAR_ARR 30
#define MAX_ELEMENT 20

/*----------------------------------------------------------------------------*/
/*								  typedefs                                    */
/*----------------------------------------------------------------------------*/
typedef struct{

	int ID;
	char name[LEN_CHAR_ARR];
	char surname[LEN_CHAR_ARR];
		
}stu_t; /* struct for students */
typedef struct{

	char degree[LEN_CHAR_ARR];
	int ID;
	char name[LEN_CHAR_ARR];
	char surname[LEN_CHAR_ARR];
			
}lecr_t; /* struct for lecturer */
typedef struct{

	int code;
	char name[LEN_CHAR_ARR];
	int ID;

}lec_t; /* struct for lecture */
typedef struct{

	char class[LEN_CHAR_ARR];
	char day[LEN_CHAR_ARR];
	int time;
	int duration;
	int code;
		
}sch_t; /* struct for schedule */
typedef struct{

	int ID;
	int code;
	
}cou_t; /* struct for course */

/*----------------------------------------------------------------------------*/
/*					       Function Prototypes                                */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* void rAndwData(stu_t *stu, lecr_t *lecr,lec_t *lec, sch_t *sch, cou_t *cou)*/
/*     (rAndwData - read And write Data)                                      */
/* --------------------                                                       */
/*                                                                            */
/*		*stu 	- 	pointer of student struct                                 */
/*		*lecr 	- 	pointer of lecturer struct                                */
/*		*lec 	- 	pointer of lecture struct                                 */
/*		*sch 	- 	pointer of schedule struct                                */
/*		*cou 	- 	pointer of course struct                                  */
/*                                                                            */
/* Return 	-   void                                                          */
/*                                                                            */
/* Description                                                                */
/* -----------                                                                */
/*		There are 5 different data types. Students, lecturers, lectures,      */
/*		schedule, courses taken by the students. At the beginning of each     */
/*		entry type is a number which indicates how many entries will be       */
/*		listed. Secondly, reads entries informations from input file          */
/*		and fill the structs. Then, organizes datas according to some         */
/*		relations for the lecturer and the number of students that takes,     */
/*		then, the student-lecture relation will be listed,                    */
/*		the last summary is about student schedules.                          */
/*                                                                            */
/*----------------------------------------------------------------------------*/
void rAndwData(stu_t *stu, lecr_t *lecr, lec_t *lec, sch_t *sch, cou_t *cou);
						
int main(){
	
	stu_t stu[MAX_ELEMENT];
	lecr_t lecr[MAX_ELEMENT]; 
	lec_t lec[MAX_ELEMENT];
	sch_t sch[MAX_ELEMENT];
	cou_t cou[MAX_ELEMENT];
	
	rAndwData(stu,lecr,lec,sch,cou);

	return 0;
}
/*----------------------------------------------------------------------------*/
/*						 Function Implementations                             */
/*----------------------------------------------------------------------------*/				
/* Function rAndwData                                                         */
/* ---------------                                                            */
/*		There are 5 different data types. Students, lecturers, lectures,      */
/*		schedule, courses taken by the students. At the beginning of each     */
/*		entry type is a number which indicates how many entries will be       */
/*		listed. Secondly, reads entries informations from input file          */
/*		and fill the structs. Then, organizes datas according to some         */
/*		relations for the lecturer and the number of students that takes,     */
/*		then, the student-lecture relation will be listed,                    */
/*		the last summary is about student schedules.                          */

void rAndwData(stu_t *stu, lecr_t *lecr, lec_t *lec, sch_t *sch, cou_t *cou){

	/* numbers indicates how many entries will be listed. */
	int numFirst,numSecond,numThird,numFourth,numFifth; 
	/* counters for loops */
	int i,j,x,y,z,k,count;

	FILE *ifp;
	FILE *ofp;

	ifp=fopen("input.dat","rb"); /* open input file(binary file) */
	ofp=fopen("output.txt","w+"); /* open output file(text file) */
	
	if(ifp==NULL){
	
		printf("***file open error***\n");
		
		return;
	}
	/* read input file and fill structures */
	fread(&numFirst,sizeof(int),1,ifp);
	fread(stu,sizeof(stu_t),numFirst,ifp);

	fread(&numSecond,sizeof(int),1,ifp);
	fread(lecr,sizeof(lecr_t),numSecond,ifp);

	fread(&numThird,sizeof(int),1,ifp);
	fread(lec,sizeof(lec_t),numThird,ifp);

	fread(&numFourth,sizeof(int),1,ifp);
	fread(sch,sizeof(sch_t),numFourth,ifp);

	fread(&numFifth,sizeof(int),1,ifp);
	fread(cou,sizeof(cou_t),numFifth,ifp);
		
	if(ofp==NULL){
		printf("***file open error***\n");
		
		return;
	}
	
	fprintf(ofp,"Lecture-Lecturer\n");

	for(j=0; j<numThird; j++){

		for(i=0; i<numSecond; i++){
		
			if(lec[j].ID==lecr[i].ID){
			
				count=0;
				for(z=0; z<numFifth; z++){
				
					if(lec[j].code==cou[z].code){
				
						count++;
					}
				}	
				fprintf(ofp,"%s %s %s %d\n",lec[j].name,lecr[i].name,
											lecr[i].surname,count);	
								
			}/* (lec[j].ID==lecr[i].ID) */
		}/* for(i=0; i<numSecond; i++) */
	}/* End of for(j=0; j<numThird; j++) */

	fprintf(ofp,"\nStudent-Lecture\n");
	
	x=0;
	while(x<numFirst){
	
		for(j=0; j<numFirst; j++){
		
			count=0;
			for(i=0; i<numFifth; i++){
			
				if(stu[j].ID==cou[i].ID){
				
					count++;
				}	
			}
			fprintf(ofp,"%d %s %s %d\n",stu[j].ID,stu[j].name,stu[j].surname,
										count);
			x++;
			
		}/* End of (j=0; j<numFirst; j++)*/
	}/* End of while(x<numFirst) */
	/*------------------------------------------------------------------------*/
	fprintf(ofp,"\nStudent-Day\n");
	
	x=0;
	while(x<numFirst){
	
		fprintf(ofp,"%d %s %s ",stu[x].ID,stu[x].name,stu[x].surname);
	
		for(i=0; i<numFifth; i++){
			
			if(stu[x].ID==cou[i].ID){
				
				for(y=0; y<numFourth; y++){
				
					if(cou[i].code==sch[y].code){
					
						k=(numFifth-1);
						while(stu[x].ID!=cou[k].ID){
							
							k--; 
						}
						/* k-last index of student ID in course struct */
						if(i==k){
						
							fprintf(ofp,"%s",sch[y].day);
						}
						else{
						
							fprintf(ofp,"%s, ",sch[y].day);		
						}
					}/* (cou[i].code==sch[y].code) */	
				}/* End of (y=0; y<numFourth; y++) */
			}/* End of (stu[x].ID==cou[i].ID) */
		}/* End of (i=0; i<numFifth; i++) */
		x++;
		fprintf(ofp,"\n");
	}/* End of while(x<numFirst) */	
	
	fclose(ifp); /* close input file */
	fclose(ofp); /* close output file */
	
	return;
}
/*----------------------------------------------------------------------------*/
/*								End of hw10.c                                 */
/*----------------------------------------------------------------------------*/
