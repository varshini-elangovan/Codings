#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	/* Read the input via console
	   Having the char array of size 10, can be modified accordingly
	   and make sure not to give value more than size of "10-1"
	*/
	char value[10] = {0};
	int i;
	size_t size;

	printf("Enter the input Binary string\n");
	scanf("%s", value);

	/* Calculate the size of an array */
    size = strlen(value);

	/*Appending Null char at the end */
	value[size] = '\0';

	for(i = 0; i < size; i++)
	{
		/* Since it is a char put the value in the single quote */

		if(value[i] != '0' && value[i] != '1')
		{
			printf("It is not a binary string\n");
			exit(0);
		}
		 
	}
	printf("It is a binary string\n");

	return 0;
}

