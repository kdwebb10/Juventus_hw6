/*
 * =====================================================================================
 *
 *       Filename:  Juventus_hw6_task1.c
 *       	Usage:  ./Juventus_hw6_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2017 05:18:00 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kyle Webb (), kylewebbear@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* Standard Library */

/* Function Prototypes */
void Usage(void); //help function
void GetRec(double* x, double* y); //accepts the imput data
void Polar(double x, double y, double* r, double* theta); //does the calculation
void Showit(double radius, double angle); //displays values
int AskQuestion(void); //asks if another calculation is needed

/* Main Program */
int main(int argc, char *argv[])
{
	float ar1, ar2;
	if (argc != 3)
	{
		Usage();
	}
	//convert argv[1] to float atof()
	ar1 = atof(argv[1]);
	//convert argv[2] to float atof()
	ar2 = atof(argv[2]);

	return 0;
}
/* Function Defenitions */
void Usage(void) //help function
{
	printf("Usage: ./task1 x-coordinate y-coordinate\n
			both params are required.\n
			Must be a floating point.\n");
}

int AskQuestion(void)
{
	int yesno;
	printf("Do you want to calculate again (Y/N)?\n
			Y = 1, N = 0; ");
	scanf("%d", &yesno);
	//test for good input of not
	//has to be 1 or 0
}


