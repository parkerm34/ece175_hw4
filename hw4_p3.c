/*	Author: Parker Mathewson
 *	Date: 2/13/12
 *	Comment: this is a program to dtermine the greatst common divisor.
 *			The user enters a number, and we go through a series of divisions until 0 remainder.
 */

#include <stdio.h>
#include <math.h>

long int gcd(int a, int b)
{
	long int c=0,d=1;

	while (d !=0)
	{
		d=a%b;
		c=a/b;				//gcd function to call upon
		a=b;
		b=d;
		return c;
	}
}

int main(void)
{
	int a=0, b=0, answer=0;

	printf("Please enter the larger number you are trying to figure the GCD for: ");
	scanf("%d",&a);
	fflush(stdin);
	printf("Please enter the smaller number you are trying to figure the GCD for: ");
	scanf("%d",&b);

	answer=gcd(a,b);			//calling the gcd function

	printf("\nYour gcd(%d,%d) is %d.\n",a,b,answer);

	return (0);
}
