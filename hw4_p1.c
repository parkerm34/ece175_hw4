/*	Author: Parker Mathewson
	Date: 2/6/12
	This program deals with a fibonacci theory where you add the 
previous two numbers in a string of numbers together to get a new number 
within this sequence.			*/

#include <stdio.h>

int main(void)
{
	int fib=1;
	int j=1;		//all of the variables are stated
	int i=0;
	unsigned int fib_min_1=0;
	unsigned int fib_min_2=0;
	unsigned int fibonacci=0;

	printf("Enter the number of Fibonacci numbers you would like to see: ");
	scanf("%d",&j);

	if (j > 1)
	{

		for (i=1; i<= j; i=i++)
		{
			fibonacci = fib_min_1 + fib_min_2;	/*starts fibonacci string*/
		
			printf("%d ",fibonacci);

				fib_min_2 = fib_min_1;
				fib_min_1 = fib;
				fib = fibonacci + fib_min_2;
		}
		printf("\n");
	}

	else
	{
		printf("Please enter a number larger than 1.");		/*error message*/
	}

	return (0);
}
