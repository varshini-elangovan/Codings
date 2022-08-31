#include<stdio.h>

int cubeRoot(int num, int power)
{
 	/* This function identifies the cube root of the number*/
	if(power == 1)
		return num;
 	return num * cubeRoot(num, power-1);
} 

void armStrongNumber(int value)
{
	int cubeSum = 0;
	int rem;
	int temp = value;

	/* Separate the given int.
	 * if i/p is 124, separate is out as 1, 2, and 4
	 */

	while(temp != 0)
	{
		rem = temp%10;
		cubeSum += cubeRoot(rem, 3);
		temp = temp/10;
	}

	if(value == cubeSum)
	{
		printf("The number is Armstrong\n");
	}
	else 
	{
		printf("OOPS!! Not an Armstrong number\n");
	}

}

int main()
{
	int value; 

	printf("Enter a number to check if it is armstrong or not\n");

	scanf("%d", &value);

	armStrongNumber(value);

   	return 0; 
}
