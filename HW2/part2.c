/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  HW02_141044016_Yagmur_Karaman                                             */
/*                                                                            */
/*  part2.c                                                                   */
/*  -------                                                                   */
/*  Created on 29/02/2016 by Yagmur Karaman                                   */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*      The part2.c contains the implementations of functions for             */
/*      the second part of the Homework II, which are used for calculate      */
/*      areas and perimeters of rectangle, square and circle.                 */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#define PI 3.14                      

/*----------------------------------------------------------------------------*/
/*                          Function Prototypes                               */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int areaOfRectangle(int widht, int height)                                */
/*  ------------------------------------------                                */
/*                                                                            */
/*      widht    - lenght of widht of the rectangle                           */
/*      height   - lenght of height of the rectangle                          */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*      This function takes the lenghts of widht and height of the rectangle. */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int perimeterOfRectangle(int widht, int height)                           */
/*  ------------------------------------------                                */
/*                                                                            */
/*      widht    - lenght of widht of the rectangle                           */
/*      height   - lenght of height of the rectangle                          */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*      This function takes the lenghts of widht and height of the rectangle. */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int areaOfSquare(int edgeLenght)                                          */
/*  ------------------------------------------                                */
/*                                                                            */
/*      edgeLenght    - lenght of edge of the square                          */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*      This function takes the lenght of edge of the square.                 */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int perimeterOfSquare(int edgeLenght)                                     */
/*  ------------------------------------------                                */
/*                                                                            */
/*      edgeLenght    - lenght of edge of the square                          */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*      This function takes the lenght of edge of the square.                 */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int areaOfCircle(int radius)                                              */
/*  ------------------------------------------                                */
/*                                                                            */
/*      radius    - lenght of radius of the circle                            */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*      This function takes the lenght of radius of the circle.               */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*  int perimeterOfCircle(int radius)                                         */
/*  ------------------------------------------                                */
/*                                                                            */
/*      radius    - lenght of radius of the circle                            */
/*                                                                            */
/*  Description                                                               */
/*  -----------                                                               */
/*      This function takes the lenght of radius of the circle.               */
/*----------------------------------------------------------------------------*/
int areaOfRectangle(int widht, int height);
int perimeterOfRectangle(int widht, int height);
int areaOfSquare(int edgeLenght);
int perimeterOfSquare(int edgeLenght);
double areaOfCircle(int radius);
double perimeterOfCircle(int radius);

/*----------------------------------------------------------------------------*/
/*                         Function Implementations                           */
/*----------------------------------------------------------------------------*/
/*  Function areaOfRectangle                                                  */
/*  ------------------------                                                  */
/*      This function takes the lenghts of widht and height of the rectangle  */
/*      for calculate area of the rectangle.                    */
int 
areaOfRectangle(int widht, int height)
{
	int rectArea;
	
	rectArea = widht*height;
	
	return (rectArea);
}

/*  Function perimeterOfRectangle                                             */
/*  -----------------------------                                             */
/*      This function takes the lenghts of widht and height of the rectangle  */
/*      for calculate perimeter of the rectangle.                             */
int 
perimeterOfRectangle(int widht, int height)
{
	int rectPerimeter;
	
	rectPerimeter = 2*(widht+height);
	
	return (rectPerimeter);
}

/*  Function areaOfSquare                                                     */
/*  ---------------------                                                     */
/*      This function takes the lenght of edge of the square for calculate    */
/*      area of the square.                                                   */
int 
areaOfSquare(int edgeLenght)
{
	int squareArea;
	
	squareArea = edgeLenght*edgeLenght;
	
	return (squareArea);
}

/*  Function perimeterOfSquare                                                */
/*  --------------------------                                                */
/*      This function takes the lenght of edge of the square for calculate    */
/*      perimeter of the square.                                              */
int 
perimeterOfSquare(int edgeLenght)
{
	int squarePerimeter;
	
	squarePerimeter = 4*edgeLenght;
	
	return (squarePerimeter);
}

/*  Function areaOfCircle                                                     */
/*  ---------------------                                                     */
/*      This function takes the lenght of radius of the circle for calculate  */
/*      area of the circle.                                                   */
double 
areaOfCircle(int radius)
{
	double circleArea;
	
	circleArea = PI*radius*radius;
	
	return (circleArea);
}

/*  Function perimeterOfCircle                                                */
/*  --------------------------                                                */
/*      This function takes the lenght of radius of the circle for calculate  */
/*      perimeter of the circle.                                              */
double 
perimeterOfCircle(int radius)
{
	double circlePerimeter;
	
	circlePerimeter = 2*PI*radius;
	
	return (circlePerimeter);
}
/*----------------------------------------------------------------------------*/
/*                          End of part2.c                                    */
/*----------------------------------------------------------------------------*/
