#include<stdio.h>

void countDigits(int num)
{
	int rem; 
	int count = 0;

	while(num != 0)
	{
	   num = num/10; 
	   count++;
	}

	printf("The count of digits %d\n", count);

}	

int main()
{
	int val;

	printf("Enter the value: ");
	scanf("%d", &val);

	countDigits(val);

}
