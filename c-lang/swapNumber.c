#include<stdio.h>

void swapNumberByValue(int n1, int n2)
{
 	int temp;

	temp = n1;
	n1 = n2;
	n2 = temp;

	printf("By Value num1: %d, num2: %d\n", n1, n2);

}

void swapNumberByRef(int *n1, int *n2)
{

 	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}

void swapNumberWithoutTemp(int n1, int n2)
{
	n1 = n1+n2;
	n2 = n1-n2;
	n1 = n1-n2;
    
    printf("Pass by reference value is passed for swap without temp\n");	
	printf("Without Temp Variable: num1: %d, num2: %d\n", n1, n2);
}

int main()
{
	int num1, num2;

	printf("Enter the num1: ");
	scanf("%d", &num1);
	printf("Enter the num2: ");
	scanf("%d", &num2);

	swapNumberByValue(num1, num2);

	swapNumberByRef(&num1 , &num2);

	printf("By Reference num1: %d, num2: %d\n", num1, num2);

	swapNumberWithoutTemp(num1, num2);

 	return 0;

}
