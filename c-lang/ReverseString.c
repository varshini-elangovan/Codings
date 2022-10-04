#include<stdio.h>
#include<string.h>

void reverseStringUsingLoop(char *line)
{
	int size = strlen(line);
	int temp;
	int i;

	for (i =  0; i < size/2; i++)
	{
		temp = line[i];
		line[i] = line[size - i - 1];
		line[size-i-1] = temp;
	}

	printf("The reversed word/Line is: %s\n", line);
}

int main()
{
	char line[50];

	printf("Enter a word/line to reverse: ");

	fgets(line, 50, stdin);
	scanf("%[^\n]s",line);

	reverseStringUsingLoop(line);

	return 0;
}
