/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  HW02_141044016_Yagmur_Karaman                                             */
/*                                                                            */
/*  part1.c                                                                   */
/*  -------                                                                   */
/*  Created on 29/02/2016 by Yagmur Karaman                                   */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*      The part1.c contains the implementation of function for               */
/*      the first part of the Homework II, which are used for calculate       */
/*      the last grade a student.                                             */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                             Function Prototype                             */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*                           Function Implementation                          */
/*----------------------------------------------------------------------------*/
/*  Function calculateLastGrade                                               */
/*  ---------------------------                                               */
/*      This function takes the first midterm, first homework, final exam     */
/*      weights and grades. After that, calculate the student's last grade.   */

void calculateLastGrade()
{
        
    int mid1Weight;                       /* input - weight of first midterm  */
    int hw1Weight;                        /* input - weight of first homework */
    int finalExWeight;                    /* input - weight of final exam     */
    double mid1Grade;                     /* input - grade of first midterm   */
    double hw1Grade;                      /* input - grade of first homework  */
    double finalExGrade;                  /* input - grade of final exam      */
    double lastGrade;                     /* output - last grade              */

/*  Get data: first midterm, first homework, final exam weights and grades.   */
    printf("Please enter the 1. midterm weight:");
    scanf("%d",&mid1Weight);
    
    printf("Please enter the 1. homework weight:");
    scanf("%d",&hw1Weight);
    
    printf("Please enter the final exam weight:");
    scanf("%d",&finalExWeight);
    
    printf("Please enter the 1. midterm grade:");
    scanf("%lf",&mid1Grade);
    
    printf("Please enter the 1. homework grade:");
    scanf("%lf",&hw1Grade);
    
    printf("Please enter the final exam grade:");
    scanf("%lf",&finalExGrade);
    
/*  Compute last grade. To be divided 100 for be over hundred of grade.       */
    lastGrade = ((mid1Weight*mid1Grade)+(hw1Weight*hw1Grade)+
                 (finalExWeight*finalExGrade))/100;
                 
/*  Display last grade.                                                       */
    printf("Your final grade is: %f\n", lastGrade);
            
}
/*----------------------------------------------------------------------------*/
/*                             End of part1.c                                 */
/*----------------------------------------------------------------------------*/
