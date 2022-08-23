#include<stdio.h>


void sizeOfArray(const char *val)
{
	size_t size = 0;
	
	/*looping till the value in Null*/
	while(*val)
	{
		size += 1;
		/* Incrementing the arr address */
		val++;
	}
	printf("The size of array: %ld\n", size);
}

int main()
{
	/* When declared like this no need to give the size of the array*/
	char arr[] = {"hello"};

	char val[10];

	printf("Print any string of size below 10: ");
	
	/* No need to add & near val in scanf, when reading it as 
	 * string it is pointed to the address directly. 
	 * Not applicable for other types 
	 */
	scanf("%s", val);

	sizeOfArray(val);

	return 0;

}

