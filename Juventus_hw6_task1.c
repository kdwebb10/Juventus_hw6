/*
 * =====================================================================================
 *
 *       Filename:  Juventus_hw6_task1.c
 *       	Usage:  ./Juventus_hw6_task1.c
 *    Description:  Rectangular to Polar Conversion
 *
 *        Version:  1.0
 *        Created:  02/28/2017 05:18:00 PM
 *       Compiler:  gcc -Wall -Werror
 *        Authors:  Kyle Webb & Adam Lee, kylewebbear@weber.edu, adamlee1@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* Standard Library */
#include <math.h>		/* Math Library. compile with -lm */

/* Function Prototypes */
void Usage(void); //help function
void GetRec(double* x, double* y); //accepts the imput data
void Polar(double x, double y, double* r, double* theta); //does the calculation
void Showit(double radius, double angle); //displays values
int AskQuestion(void); //asks if another calculation is needed
	double r, theta;


/* Main Program */
int main(int argc, char *argv[])
{
	float ar1, ar2;
	double x,y;
	
	while (1)
	{
		if (argc != 3) //Takes 2 valuses as well as ./"file name"
		{
			Usage();
			break;
		}
		
	ar1 = atof(argv[1]);
	ar2 = atof(argv[2]);
		
		if(ar1 == 0 || ar2 == 0)
		{
			Usage();
			break;
		}
		else
		{
			Polar(ar1, ar2, &r, &theta);
			Showit(r, theta);
			break;
		}
	}
	
	while(1)
	{
		if(ar1 == 0 || ar2 == 0)
		{
		break;
		}
		int a = AskQuestion();

		if (a == 1)
		{
			GetRec(&x, &y);
			if ((x == 0) || (y == 0)) //Test for bad input data
			{
				Usage();
				printf("    <values must be greater then zero>\n\n\n");
			}
			else
			{
				Polar(x, y, &r, &theta);
				Showit( r, theta);
			}
		}
		if  (a == 0)
		{
			printf("\nThank you for using our calculator.\n\n");
			break;
		}
	}
	return 0;
}

/* Function Defenitions */
void Usage(void) //help function
{
	printf("\nUsage: ./task1 x-coordinate y-coordinate\n\n    both params are required.\n\n    Must be a floating point.\n\n");
	return;
}
void Polar(double x, double y, double* r, double* theta) //calculations
{
	double radians;
	
	*r = sqrt((pow(x,2) + pow(y,2)));
	radians = atan(y/x); //calculates angle in radians
	*theta = (radians * 180) / 3.1415926535; //converts radians to degrees

	return;
}
void GetRec(double* x, double* y) //accepts the input data
{
	printf("\nRectangular to Polar Coordinate. Converson Program.\n");
	printf("\nEnter the x coordinate: ");
	scanf("%lf", &*x);
	printf("\nEnter the y coordinate: ");
	scanf("%lf", &*y);
	return;
}
void Showit(double radius, double angle) //displays values
{

	printf("\nThe polar coordinates are:\n");
	printf("\n Distance from orgin: %f\n", r);
	//call the value from Polar function for r.
	printf("\n Angle (in degrees) from the a-axis: %f\n\n", theta);
	//call the values from Polar function for theta
	return;
}
int AskQuestion(void)
{
	int yesno;
	//test for good input of not
	//has to be 1 or 0
	
	printf("Do you want to calculate again (Y/N)?\n\n Y = 1, N = 0: ");
	scanf("%d", &yesno);

	if ((yesno != 1) && (yesno != 0))
	{
		getchar();
		while (yesno != 1)
		{
			printf("\nBad input, try again\n\n");
			break;
		}
	}
	return yesno;
}
