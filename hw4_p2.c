/*	Author: Parker Mathewson
 *	Date: 2/13/12
 *	Comment: This is a program that will be used to find the sum of
 *			squares of the number entered by the user, aka
 *			the square pyramidal number.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{		/*square pyramidal first*/
	int upper=0,i=0,ans=0,pyr=0,j=0,ans_min_1=0;
	int ans_2=0,poly=0;

	printf("Enter a number to calculate the square pyramidal: ");
	scanf("%d",&upper);

	for (i=0;i<=upper;i++)
	{
		pyr=pow(i,2)+ans;
		ans=pyr;					/*sum of squares*/
	}

	printf("The sum of squares result is %d\n",ans);


	ans_2=(2*pow(upper,3)+3*pow(upper,2)+upper)/6;		/*polynomial*/

	printf("The polynomail result is %d\n",ans_2);

	if (ans==ans_2)						/*if else check for ==*/
		printf("The results are identical!\n");
	else
		printf("The program is wrong...\n");

	return(0);
}
